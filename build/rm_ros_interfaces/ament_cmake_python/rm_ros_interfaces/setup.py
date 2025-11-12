from setuptools import find_packages
from setuptools import setup

setup(
    name='rm_ros_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('rm_ros_interfaces', 'rm_ros_interfaces.*')),
)
