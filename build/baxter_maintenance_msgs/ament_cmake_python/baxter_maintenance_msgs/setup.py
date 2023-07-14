from setuptools import find_packages
from setuptools import setup

setup(
    name='baxter_maintenance_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('baxter_maintenance_msgs', 'baxter_maintenance_msgs.*')),
)
