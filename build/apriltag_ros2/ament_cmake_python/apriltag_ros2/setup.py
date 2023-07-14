from setuptools import find_packages
from setuptools import setup

setup(
    name='apriltag_ros2',
    version='3.2.1',
    packages=find_packages(
        include=('apriltag_ros2', 'apriltag_ros2.*')),
)
