from setuptools import find_packages
from setuptools import setup

setup(
    name='baxter_core_msgs',
    version='1.3.0',
    packages=find_packages(
        include=('baxter_core_msgs', 'baxter_core_msgs.*')),
)
