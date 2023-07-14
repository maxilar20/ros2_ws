// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace servo {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::upper_bounds;
using rsl::lower_bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        std::string move_group_name;
        std::string planning_frame;
        std::string ee_frame_name;
        std::string robot_link_command_frame;
        std::string monitored_planning_scene_topic = "/planning_scene";
        std::string status_topic = "~/status";
        std::string command_out_topic = "/panda_arm_controller/joint_trajectory";
        std::string command_out_type = "trajectory_msgs/JointTrajectory";
        std::string cartesian_command_in_topic = "~/delta_twist_cmds";
        std::string joint_command_in_topic = "~/delta_joint_cmds";
        std::string command_in_type = "unitless";
        std::string joint_topic = "/joint_states";
        bool enable_parameter_update = false;
        double override_velocity_scaling_factor = 0.0;
        double publish_period = 0.034;
        bool publish_joint_positions = true;
        bool publish_joint_velocities = true;
        bool publish_joint_accelerations = false;
        std::string smoothing_filter_plugin_name = "online_signal_smoothing::ButterworthFilterPlugin";
        bool is_primary_planning_scene_monitor = true;
        double incoming_command_timeout = 0.1;
        bool halt_all_joints_in_joint_mode = true;
        bool halt_all_joints_in_cartesian_mode = true;
        double lower_singularity_threshold = 17.0;
        double hard_stop_singularity_threshold = 30.0;
        double leaving_singularity_threshold_multiplier = 2.0;
        double joint_limit_margin = 0.1;
        bool low_latency_mode = false;
        bool check_collisions = true;
        double collision_check_rate = 10.0;
        double self_collision_proximity_threshold = 0.01;
        double scene_collision_proximity_threshold = 0.02;
        double windup_limit = 0.05;
        double x_proportional_gain = 1.5;
        double y_proportional_gain = 1.5;
        double z_proportional_gain = 1.5;
        double x_integral_gain = 0.0;
        double y_integral_gain = 0.0;
        double z_integral_gain = 0.0;
        double x_derivative_gain = 0.0;
        double y_derivative_gain = 0.0;
        double z_derivative_gain = 0.0;
        double angular_proportional_gain = 0.5;
        double angular_integral_gain = 0.0;
        double angular_derivative_gain = 0.0;
        struct Scale {
            double linear = 0.4;
            double rotational = 0.8;
            double joint = 0.5;
        } scale;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool enable_parameter_update = false;
        double override_velocity_scaling_factor = 0.0;
        double publish_period = 0.034;
        bool publish_joint_positions = true;
        bool publish_joint_velocities = true;
        bool publish_joint_accelerations = false;
        bool is_primary_planning_scene_monitor = true;
        double incoming_command_timeout = 0.1;
        bool halt_all_joints_in_joint_mode = true;
        bool halt_all_joints_in_cartesian_mode = true;
        double lower_singularity_threshold = 17.0;
        double hard_stop_singularity_threshold = 30.0;
        double leaving_singularity_threshold_multiplier = 2.0;
        double joint_limit_margin = 0.1;
        bool low_latency_mode = false;
        bool check_collisions = true;
        double collision_check_rate = 10.0;
        double self_collision_proximity_threshold = 0.01;
        double scene_collision_proximity_threshold = 0.02;
        double windup_limit = 0.05;
        double x_proportional_gain = 1.5;
        double y_proportional_gain = 1.5;
        double z_proportional_gain = 1.5;
        double x_integral_gain = 0.0;
        double y_integral_gain = 0.0;
        double z_integral_gain = 0.0;
        double x_derivative_gain = 0.0;
        double y_derivative_gain = 0.0;
        double z_derivative_gain = 0.0;
        double angular_proportional_gain = 0.5;
        double angular_integral_gain = 0.0;
        double angular_derivative_gain = 0.0;
        struct Scale {
            double linear = 0.4;
            double rotational = 0.8;
            double joint = 0.5;
        } scale;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface, std::string const& prefix = ""){
      prefix_ = prefix;
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.enable_parameter_update = params.enable_parameter_update;
      output.scale.linear = params.scale.linear;
      output.scale.rotational = params.scale.rotational;
      output.scale.joint = params.scale.joint;
      output.override_velocity_scaling_factor = params.override_velocity_scaling_factor;
      output.publish_period = params.publish_period;
      output.publish_joint_positions = params.publish_joint_positions;
      output.publish_joint_velocities = params.publish_joint_velocities;
      output.publish_joint_accelerations = params.publish_joint_accelerations;
      output.is_primary_planning_scene_monitor = params.is_primary_planning_scene_monitor;
      output.incoming_command_timeout = params.incoming_command_timeout;
      output.halt_all_joints_in_joint_mode = params.halt_all_joints_in_joint_mode;
      output.halt_all_joints_in_cartesian_mode = params.halt_all_joints_in_cartesian_mode;
      output.lower_singularity_threshold = params.lower_singularity_threshold;
      output.hard_stop_singularity_threshold = params.hard_stop_singularity_threshold;
      output.leaving_singularity_threshold_multiplier = params.leaving_singularity_threshold_multiplier;
      output.joint_limit_margin = params.joint_limit_margin;
      output.low_latency_mode = params.low_latency_mode;
      output.check_collisions = params.check_collisions;
      output.collision_check_rate = params.collision_check_rate;
      output.self_collision_proximity_threshold = params.self_collision_proximity_threshold;
      output.scene_collision_proximity_threshold = params.scene_collision_proximity_threshold;
      output.windup_limit = params.windup_limit;
      output.x_proportional_gain = params.x_proportional_gain;
      output.y_proportional_gain = params.y_proportional_gain;
      output.z_proportional_gain = params.z_proportional_gain;
      output.x_integral_gain = params.x_integral_gain;
      output.y_integral_gain = params.y_integral_gain;
      output.z_integral_gain = params.z_integral_gain;
      output.x_derivative_gain = params.x_derivative_gain;
      output.y_derivative_gain = params.y_derivative_gain;
      output.z_derivative_gain = params.z_derivative_gain;
      output.angular_proportional_gain = params.angular_proportional_gain;
      output.angular_integral_gain = params.angular_integral_gain;
      output.angular_derivative_gain = params.angular_derivative_gain;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "move_group_name")) {
            updated_params.move_group_name = param.as_string();
        }
        if (param.get_name() == (prefix_ + "planning_frame")) {
            updated_params.planning_frame = param.as_string();
        }
        if (param.get_name() == (prefix_ + "ee_frame_name")) {
            updated_params.ee_frame_name = param.as_string();
        }
        if (param.get_name() == (prefix_ + "robot_link_command_frame")) {
            updated_params.robot_link_command_frame = param.as_string();
        }
        if (param.get_name() == (prefix_ + "monitored_planning_scene_topic")) {
            updated_params.monitored_planning_scene_topic = param.as_string();
        }
        if (param.get_name() == (prefix_ + "status_topic")) {
            updated_params.status_topic = param.as_string();
        }
        if (param.get_name() == (prefix_ + "command_out_topic")) {
            updated_params.command_out_topic = param.as_string();
        }
        if (param.get_name() == (prefix_ + "command_out_type")) {
            if(auto validation_result = one_of<std::string>(param, {"trajectory_msgs/JointTrajectory", "std_msgs/Float64MultiArray"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.command_out_type = param.as_string();
        }
        if (param.get_name() == (prefix_ + "cartesian_command_in_topic")) {
            updated_params.cartesian_command_in_topic = param.as_string();
        }
        if (param.get_name() == (prefix_ + "joint_command_in_topic")) {
            updated_params.joint_command_in_topic = param.as_string();
        }
        if (param.get_name() == (prefix_ + "command_in_type")) {
            if(auto validation_result = one_of<std::string>(param, {"unitless", "speed_units"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.command_in_type = param.as_string();
        }
        if (param.get_name() == (prefix_ + "joint_topic")) {
            updated_params.joint_topic = param.as_string();
        }
        if (param.get_name() == (prefix_ + "enable_parameter_update")) {
            updated_params.enable_parameter_update = param.as_bool();
        }
        if (param.get_name() == (prefix_ + "scale.linear")) {
            updated_params.scale.linear = param.as_double();
        }
        if (param.get_name() == (prefix_ + "scale.rotational")) {
            updated_params.scale.rotational = param.as_double();
        }
        if (param.get_name() == (prefix_ + "scale.joint")) {
            updated_params.scale.joint = param.as_double();
        }
        if (param.get_name() == (prefix_ + "override_velocity_scaling_factor")) {
            updated_params.override_velocity_scaling_factor = param.as_double();
        }
        if (param.get_name() == (prefix_ + "publish_period")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.publish_period = param.as_double();
        }
        if (param.get_name() == (prefix_ + "publish_joint_positions")) {
            updated_params.publish_joint_positions = param.as_bool();
        }
        if (param.get_name() == (prefix_ + "publish_joint_velocities")) {
            updated_params.publish_joint_velocities = param.as_bool();
        }
        if (param.get_name() == (prefix_ + "publish_joint_accelerations")) {
            updated_params.publish_joint_accelerations = param.as_bool();
        }
        if (param.get_name() == (prefix_ + "smoothing_filter_plugin_name")) {
            updated_params.smoothing_filter_plugin_name = param.as_string();
        }
        if (param.get_name() == (prefix_ + "is_primary_planning_scene_monitor")) {
            updated_params.is_primary_planning_scene_monitor = param.as_bool();
        }
        if (param.get_name() == (prefix_ + "incoming_command_timeout")) {
            updated_params.incoming_command_timeout = param.as_double();
        }
        if (param.get_name() == (prefix_ + "halt_all_joints_in_joint_mode")) {
            updated_params.halt_all_joints_in_joint_mode = param.as_bool();
        }
        if (param.get_name() == (prefix_ + "halt_all_joints_in_cartesian_mode")) {
            updated_params.halt_all_joints_in_cartesian_mode = param.as_bool();
        }
        if (param.get_name() == (prefix_ + "lower_singularity_threshold")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.lower_singularity_threshold = param.as_double();
        }
        if (param.get_name() == (prefix_ + "hard_stop_singularity_threshold")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hard_stop_singularity_threshold = param.as_double();
        }
        if (param.get_name() == (prefix_ + "leaving_singularity_threshold_multiplier")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.leaving_singularity_threshold_multiplier = param.as_double();
        }
        if (param.get_name() == (prefix_ + "joint_limit_margin")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.joint_limit_margin = param.as_double();
        }
        if (param.get_name() == (prefix_ + "low_latency_mode")) {
            updated_params.low_latency_mode = param.as_bool();
        }
        if (param.get_name() == (prefix_ + "check_collisions")) {
            updated_params.check_collisions = param.as_bool();
        }
        if (param.get_name() == (prefix_ + "collision_check_rate")) {
            if(auto validation_result = gt_eq<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.collision_check_rate = param.as_double();
        }
        if (param.get_name() == (prefix_ + "self_collision_proximity_threshold")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.self_collision_proximity_threshold = param.as_double();
        }
        if (param.get_name() == (prefix_ + "scene_collision_proximity_threshold")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.scene_collision_proximity_threshold = param.as_double();
        }
        if (param.get_name() == (prefix_ + "windup_limit")) {
            updated_params.windup_limit = param.as_double();
        }
        if (param.get_name() == (prefix_ + "x_proportional_gain")) {
            updated_params.x_proportional_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "y_proportional_gain")) {
            updated_params.y_proportional_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "z_proportional_gain")) {
            updated_params.z_proportional_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "x_integral_gain")) {
            updated_params.x_integral_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "y_integral_gain")) {
            updated_params.y_integral_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "z_integral_gain")) {
            updated_params.z_integral_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "x_derivative_gain")) {
            updated_params.x_derivative_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "y_derivative_gain")) {
            updated_params.y_derivative_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "z_derivative_gain")) {
            updated_params.z_derivative_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "angular_proportional_gain")) {
            updated_params.angular_proportional_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "angular_integral_gain")) {
            updated_params.angular_integral_gain = param.as_double();
        }
        if (param.get_name() == (prefix_ + "angular_derivative_gain")) {
            updated_params.angular_derivative_gain = param.as_double();
        }
      }

      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "move_group_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The name of the moveit move_group of your robot This parameter does not have a default value and must be passed to the node during launch time.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "move_group_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "planning_frame")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The name of moveit planning frame.This parameter does not have a default value and must be passed to the node during launch time.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "planning_frame", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ee_frame_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The name of end-effector frame of your robot This parameter does not have a default value and must be passed to the node during launch time.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "ee_frame_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "robot_link_command_frame")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The frame of incoming command, change this to your own value when using a different robot This parameter does not have a default value and must be passed to the node during launch time.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "robot_link_command_frame", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "monitored_planning_scene_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The name of the planning scene topic. planning_scene_monitor::PlanningSceneMonitor::DEFAULT_PLANNING_SCENE_TOPIC";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.monitored_planning_scene_topic);
          parameters_interface_->declare_parameter(prefix_ + "monitored_planning_scene_topic", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "status_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The topic to which the status will be published";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.status_topic);
          parameters_interface_->declare_parameter(prefix_ + "status_topic", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_out_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The topic on which servo will publish the joint trajectory Change this to the topic your controller requires.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.command_out_topic);
          parameters_interface_->declare_parameter(prefix_ + "command_out_topic", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_out_type")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The type of command that servo will publish";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.command_out_type);
          parameters_interface_->declare_parameter(prefix_ + "command_out_type", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "cartesian_command_in_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The topic on which servo will receive the twist commands";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.cartesian_command_in_topic);
          parameters_interface_->declare_parameter(prefix_ + "cartesian_command_in_topic", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "joint_command_in_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The topic on which servo will receive the joint jog commands";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.joint_command_in_topic);
          parameters_interface_->declare_parameter(prefix_ + "joint_command_in_topic", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_in_type")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The unit of the incoming command.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.command_in_type);
          parameters_interface_->declare_parameter(prefix_ + "command_in_type", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "joint_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The topic on which joint states can be monitored";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.joint_topic);
          parameters_interface_->declare_parameter(prefix_ + "joint_topic", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "enable_parameter_update")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If true, continuous check for parameter update is enabled Currently only the following parameters are updated: 1. override_velocity_scaling_factor 2. robot_link_command_frame";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.enable_parameter_update);
          parameters_interface_->declare_parameter(prefix_ + "enable_parameter_update", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "scale.linear")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Max linear velocity. Unit is [m/s]. Only used for Cartesian commands.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.scale.linear);
          parameters_interface_->declare_parameter(prefix_ + "scale.linear", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "scale.rotational")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Max angular velocity. Unit is [rad/s]. Only used for Cartesian commands.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.scale.rotational);
          parameters_interface_->declare_parameter(prefix_ + "scale.rotational", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "scale.joint")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Max joint angular/linear velocity. Only used for joint commands on joint_command_in_topic.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.scale.joint);
          parameters_interface_->declare_parameter(prefix_ + "scale.joint", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "override_velocity_scaling_factor")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Scaling factor when servo overrides the velocity (eg: near singularities)";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.override_velocity_scaling_factor);
          parameters_interface_->declare_parameter(prefix_ + "override_velocity_scaling_factor", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_period")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = " 1 / (Nominal publish rate) [seconds]";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.publish_period);
          parameters_interface_->declare_parameter(prefix_ + "publish_period", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_joint_positions")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If true servo will publish joint positions in the output command";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_joint_positions);
          parameters_interface_->declare_parameter(prefix_ + "publish_joint_positions", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_joint_velocities")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If true servo will publish joint velocities in the output command";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_joint_velocities);
          parameters_interface_->declare_parameter(prefix_ + "publish_joint_velocities", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_joint_accelerations")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If true servo will publish joint accelerations in the output command";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_joint_accelerations);
          parameters_interface_->declare_parameter(prefix_ + "publish_joint_accelerations", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "smoothing_filter_plugin_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The name of the smoothing plugin to be used";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.smoothing_filter_plugin_name);
          parameters_interface_->declare_parameter(prefix_ + "smoothing_filter_plugin_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "is_primary_planning_scene_monitor")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If is_primary_planning_scene_monitor is set to true, the Servo server's PlanningScene advertises the /get_planning_scene service, which other nodes can use to get information about the planning environment. If a different node in your system will be publishing the planning scene, this should be set to false";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.is_primary_planning_scene_monitor);
          parameters_interface_->declare_parameter(prefix_ + "is_primary_planning_scene_monitor", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "incoming_command_timeout")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Stop servoing if X seconds elapse without a new command. If 0, republish commands forever even if the robot is stationary. Otherwise, specify num. to publish. Important because ROS may drop some messages and we need the robot to halt reliably.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.incoming_command_timeout);
          parameters_interface_->declare_parameter(prefix_ + "incoming_command_timeout", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "halt_all_joints_in_joint_mode")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Halt all joints in joint mode";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.halt_all_joints_in_joint_mode);
          parameters_interface_->declare_parameter(prefix_ + "halt_all_joints_in_joint_mode", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "halt_all_joints_in_cartesian_mode")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Halt all joints in cartesian mode";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.halt_all_joints_in_cartesian_mode);
          parameters_interface_->declare_parameter(prefix_ + "halt_all_joints_in_cartesian_mode", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "lower_singularity_threshold")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Start decelerating when the condition number hits this (close to singularity)";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.lower_singularity_threshold);
          parameters_interface_->declare_parameter(prefix_ + "lower_singularity_threshold", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hard_stop_singularity_threshold")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Stop when the condition number hits this";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.hard_stop_singularity_threshold);
          parameters_interface_->declare_parameter(prefix_ + "hard_stop_singularity_threshold", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "leaving_singularity_threshold_multiplier")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "When 'lower_singularity_threshold' is triggered, but we are moving away from singularity, move this many times faster than if we were moving further into singularity";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.leaving_singularity_threshold_multiplier);
          parameters_interface_->declare_parameter(prefix_ + "leaving_singularity_threshold_multiplier", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "joint_limit_margin")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Added as a buffer to joint limits [radians]. If moving quickly, make this larger.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.joint_limit_margin);
          parameters_interface_->declare_parameter(prefix_ + "joint_limit_margin", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "low_latency_mode")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If true , low latency mode is enabled.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.low_latency_mode);
          parameters_interface_->declare_parameter(prefix_ + "low_latency_mode", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "check_collisions")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If true, servo will check for collision using the planning scene monitor.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.check_collisions);
          parameters_interface_->declare_parameter(prefix_ + "check_collisions", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "collision_check_rate")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "[Hz] Collision-checking can easily bog down a CPU if done too often. Collision checking begins slowing down when nearer than a specified distance.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.collision_check_rate);
          parameters_interface_->declare_parameter(prefix_ + "collision_check_rate", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "self_collision_proximity_threshold")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Start decelerating when a self-collision is this far [m]";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.self_collision_proximity_threshold);
          parameters_interface_->declare_parameter(prefix_ + "self_collision_proximity_threshold", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "scene_collision_proximity_threshold")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Start decelerating when a collision is this far [m]";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.scene_collision_proximity_threshold);
          parameters_interface_->declare_parameter(prefix_ + "scene_collision_proximity_threshold", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "windup_limit")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum value of error integral for all PID controllers";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.windup_limit);
          parameters_interface_->declare_parameter(prefix_ + "windup_limit", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "x_proportional_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Proportional gain value for the controller in x direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.x_proportional_gain);
          parameters_interface_->declare_parameter(prefix_ + "x_proportional_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "y_proportional_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Proportional gain value for the controller in y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.y_proportional_gain);
          parameters_interface_->declare_parameter(prefix_ + "y_proportional_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "z_proportional_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Proportional gain value for the controller in z direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.z_proportional_gain);
          parameters_interface_->declare_parameter(prefix_ + "z_proportional_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "x_integral_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Integral gain value for the controller in x direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.x_integral_gain);
          parameters_interface_->declare_parameter(prefix_ + "x_integral_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "y_integral_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Integral gain value for the controller in y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.y_integral_gain);
          parameters_interface_->declare_parameter(prefix_ + "y_integral_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "z_integral_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Integral gain value for the controller in z direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.z_integral_gain);
          parameters_interface_->declare_parameter(prefix_ + "z_integral_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "x_derivative_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Derivative gain value for the controller in x direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.x_derivative_gain);
          parameters_interface_->declare_parameter(prefix_ + "x_derivative_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "y_derivative_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Derivative gain value for the controller in y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.y_derivative_gain);
          parameters_interface_->declare_parameter(prefix_ + "y_derivative_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "z_derivative_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Derivative gain value for the controller in z direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.z_derivative_gain);
          parameters_interface_->declare_parameter(prefix_ + "z_derivative_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular_proportional_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Proportional gain value for angular control";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular_proportional_gain);
          parameters_interface_->declare_parameter(prefix_ + "angular_proportional_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular_integral_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Integral gain value for angular control";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular_integral_gain);
          parameters_interface_->declare_parameter(prefix_ + "angular_integral_gain", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular_derivative_gain")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Derivative gain value for angular control";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular_derivative_gain);
          parameters_interface_->declare_parameter(prefix_ + "angular_derivative_gain", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "move_group_name");
      updated_params.move_group_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "planning_frame");
      updated_params.planning_frame = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "ee_frame_name");
      updated_params.ee_frame_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "robot_link_command_frame");
      updated_params.robot_link_command_frame = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "monitored_planning_scene_topic");
      updated_params.monitored_planning_scene_topic = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "status_topic");
      updated_params.status_topic = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "command_out_topic");
      updated_params.command_out_topic = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "command_out_type");
      if(auto validation_result = one_of<std::string>(param, {"trajectory_msgs/JointTrajectory", "std_msgs/Float64MultiArray"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_out_type': " + validation_result.error()));
      }
      updated_params.command_out_type = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "cartesian_command_in_topic");
      updated_params.cartesian_command_in_topic = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "joint_command_in_topic");
      updated_params.joint_command_in_topic = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "command_in_type");
      if(auto validation_result = one_of<std::string>(param, {"unitless", "speed_units"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_in_type': " + validation_result.error()));
      }
      updated_params.command_in_type = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "joint_topic");
      updated_params.joint_topic = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "enable_parameter_update");
      updated_params.enable_parameter_update = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "scale.linear");
      updated_params.scale.linear = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "scale.rotational");
      updated_params.scale.rotational = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "scale.joint");
      updated_params.scale.joint = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "override_velocity_scaling_factor");
      updated_params.override_velocity_scaling_factor = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "publish_period");
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'publish_period': " + validation_result.error()));
      }
      updated_params.publish_period = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "publish_joint_positions");
      updated_params.publish_joint_positions = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "publish_joint_velocities");
      updated_params.publish_joint_velocities = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "publish_joint_accelerations");
      updated_params.publish_joint_accelerations = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "smoothing_filter_plugin_name");
      updated_params.smoothing_filter_plugin_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "is_primary_planning_scene_monitor");
      updated_params.is_primary_planning_scene_monitor = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "incoming_command_timeout");
      updated_params.incoming_command_timeout = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "halt_all_joints_in_joint_mode");
      updated_params.halt_all_joints_in_joint_mode = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "halt_all_joints_in_cartesian_mode");
      updated_params.halt_all_joints_in_cartesian_mode = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "lower_singularity_threshold");
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'lower_singularity_threshold': " + validation_result.error()));
      }
      updated_params.lower_singularity_threshold = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "hard_stop_singularity_threshold");
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hard_stop_singularity_threshold': " + validation_result.error()));
      }
      updated_params.hard_stop_singularity_threshold = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "leaving_singularity_threshold_multiplier");
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'leaving_singularity_threshold_multiplier': " + validation_result.error()));
      }
      updated_params.leaving_singularity_threshold_multiplier = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "joint_limit_margin");
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'joint_limit_margin': " + validation_result.error()));
      }
      updated_params.joint_limit_margin = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "low_latency_mode");
      updated_params.low_latency_mode = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "check_collisions");
      updated_params.check_collisions = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "collision_check_rate");
      if(auto validation_result = gt_eq<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'collision_check_rate': " + validation_result.error()));
      }
      updated_params.collision_check_rate = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "self_collision_proximity_threshold");
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'self_collision_proximity_threshold': " + validation_result.error()));
      }
      updated_params.self_collision_proximity_threshold = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "scene_collision_proximity_threshold");
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'scene_collision_proximity_threshold': " + validation_result.error()));
      }
      updated_params.scene_collision_proximity_threshold = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "windup_limit");
      updated_params.windup_limit = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "x_proportional_gain");
      updated_params.x_proportional_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "y_proportional_gain");
      updated_params.y_proportional_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "z_proportional_gain");
      updated_params.z_proportional_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "x_integral_gain");
      updated_params.x_integral_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "y_integral_gain");
      updated_params.y_integral_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "z_integral_gain");
      updated_params.z_integral_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "x_derivative_gain");
      updated_params.x_derivative_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "y_derivative_gain");
      updated_params.y_derivative_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "z_derivative_gain");
      updated_params.z_derivative_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular_proportional_gain");
      updated_params.angular_proportional_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular_integral_gain");
      updated_params.angular_integral_gain = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular_derivative_gain");
      updated_params.angular_derivative_gain = param.as_double();


      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
    }

    private:
      void update_interal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = updated_params;
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;
      std::mutex mutable mutex_;
  };

} // namespace servo