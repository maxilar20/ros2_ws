from launch import LaunchDescription
from launch_ros.actions import Node

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory

from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


import os


def generate_launch_description():
    ld = LaunchDescription()

    zed_camera_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("zed_wrapper"), "launch", "zed.launch.py"
            )
        ),
        launch_arguments={"publish_tf": "false", "zed_id": "0"}.items(),
    )

    zed_apriltag_node = Node(
        package="apriltag_ros2",
        executable="apriltag_ros2_continuous_detector_node",
        name="zed_apriltag_node",
        parameters=[
            {"size": 0.75},
            {"publish_tag_detections_image": True},
            {"camera_frame_id": "zed_left_camera_frame"},
            {"camera_base_frame_id": "base_link"},
            {
                os.path.join(
                    get_package_share_directory("apriltag_ros2"),
                    "config",
                    "settings.param.yaml",
                )
            },
            {
                os.path.join(
                    get_package_share_directory("apriltag_ros2"),
                    "config",
                    "tags.param.yaml",
                )
            },
        ],
        remappings=[
            ("~/image_rect", "/zed/zed_node/rgb_raw/image_raw_color"),
            ("~/camera_info", "/zed/zed_node/rgb_raw/camera_info"),
        ],
    )

    zed_filter = Node(
        package="pcl_ros",
        executable="filter_voxel_grid_node",
        name="zed_filter_node",
        namespace="zed_filter",
        parameters=[
            {"leaf_size": 0.003},
        ],
        remappings=[
            ("input", "/zed/zed_node/point_cloud/cloud_registered"),
        ],
    )

    zed2_camera_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("zed_wrapper"), "launch", "zed2.launch.py"
            )
        ),
        launch_arguments={
            "zed_id": "0",
            "base_frame": "zed2_base_frame",
        }.items(),
    )

    zed2_apriltag_node = Node(
        package="apriltag_ros2",
        executable="apriltag_ros2_continuous_detector_node",
        name="zed2_apriltag_node",
        parameters=[
            {"size": 0.75},
            {"publish_tag_detections_image": True},
            {"camera_frame_id": "zed2_left_camera_frame"},
            {"camera_base_frame_id": "map"},
            {
                os.path.join(
                    get_package_share_directory("apriltag_ros2"),
                    "config",
                    "settings.param.yaml",
                )
            },
            {
                os.path.join(
                    get_package_share_directory("apriltag_ros2"),
                    "config",
                    "tags.param.yaml",
                )
            },
        ],
        remappings=[
            ("~/image_rect", "/zed2/zed_node/rgb_raw/image_raw_color"),
            ("~/camera_info", "/zed2/zed_node/rgb_raw/camera_info"),
        ],
    )

    zed2_filter = Node(
        package="pcl_ros",
        executable="filter_voxel_grid_node",
        name="zed2_filter_node",
        namespace="zed2_filter",
        parameters=[{"leaf_size": 0.003}, {"filter_limit_min": -2.0}],
        remappings=[
            ("input", "/zed2/zed_node/point_cloud/cloud_registered"),
        ],
    )

    d435_camera_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("realsense2_camera"),
                "launch",
                "rs_launch.py",
            )
        ),
        launch_arguments={
            "align_depth.enable": "true",
            "pointcloud.enable": "true",
            "camera_name": "D435",
        }.items(),
    )

    d435_apriltag_node = Node(
        package="apriltag_ros2",
        executable="apriltag_ros2_continuous_detector_node",
        name="d435_apriltag_node",
        parameters=[
            {"size": 0.75},
            {"publish_tag_detections_image": True},
            {"camera_frame_id": "D435_color_frame"},
            {"camera_base_frame_id": "D435_link"},
            {
                os.path.join(
                    get_package_share_directory("apriltag_ros2"),
                    "config",
                    "settings.param.yaml",
                )
            },
            {
                os.path.join(
                    get_package_share_directory("apriltag_ros2"),
                    "config",
                    "tags.param.yaml",
                )
            },
        ],
        remappings=[
            ("~/image_rect", "/D435/color/image_raw"),
            ("~/camera_info", "/D435/color/camera_info"),
        ],
    )

    d435_filter = Node(
        package="pcl_ros",
        executable="filter_voxel_grid_node",
        name="d435_filter_node",
        namespace="d435_filter",
        parameters=[
            {"leaf_size": 0.002},
        ],
        remappings=[
            ("input", "/D435/depth/color/points"),
        ],
    )

    table_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="table_tf",
        arguments=["0", "0", "0.9", "0", "-1.57", "0", "world_absolute", "table_0"],
    )

    rviz2 = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        arguments=[
            "-d",
            os.path.join(
                get_package_share_directory("baxter_6dof_vr"), "config", "rviz.rviz"
            ),
        ],
    )

    tcp_node = Node(
        package="ros_tcp_endpoint",
        executable="default_server_endpoint",
        name="tcp_node",
        parameters=[
            {"ROS_IP": "130.209.252.206"},
        ],
    )

    # Launch as much as possible in components
    container = ComposableNodeContainer(
        name="moveit_servo_demo_container",
        namespace="/",
        package="rclcpp_components",
        executable="component_container_mt",
        composable_node_descriptions=[
            # Example of launching Servo as a node component
            # Assuming ROS2 intraprocess communications works well, this is a more efficient way.
            # ComposableNode(
            #     package="moveit_servo",
            #     plugin="moveit_servo::ServoServer",
            #     name="servo_server",
            #     parameters=[
            #         servo_params,
            #         moveit_config.robot_description,
            #         moveit_config.robot_description_semantic,
            #     ],
            # ),
            ComposableNode(
                package="robot_state_publisher",
                plugin="robot_state_publisher::RobotStatePublisher",
                name="robot_state_publisher",
                parameters=[moveit_config.robot_description],
            ),
            ComposableNode(
                package="tf2_ros",
                plugin="tf2_ros::StaticTransformBroadcasterNode",
                name="static_tf2_broadcaster",
                parameters=[{"child_frame_id": "/panda_link0", "frame_id": "/world"}],
            ),
            ComposableNode(
                package="moveit_servo",
                plugin="moveit_servo::JoyToServoPub",
                name="controller_to_servo_node",
            ),
            ComposableNode(
                package="joy",
                plugin="joy::Joy",
                name="joy_node",
            ),
        ],
        output="screen",
    )
    # Launch a standalone Servo node.
    # As opposed to a node component, this may be necessary (for example) if Servo is running on a different PC
    servo_node = Node(
        package="moveit_servo",
        executable="servo_node_main",
        parameters=[
            servo_params,
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
        ],
        output="screen",
    )

    # ld.add_action(zed_camera_launch)
    # ld.add_action(zed_apriltag_node)
    # ld.add_action(zed_filter)

    ld.add_action(zed2_camera_launch)
    ld.add_action(zed2_apriltag_node)
    ld.add_action(zed2_filter)

    ld.add_action(d435_camera_launch)
    ld.add_action(d435_apriltag_node)
    ld.add_action(d435_filter)

    ld.add_action(table_tf)

    ld.add_action(rviz2)
    ld.add_action(tcp_node)

    return ld
