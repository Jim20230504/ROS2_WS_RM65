from setuptools import find_packages
from setuptools import setup

setup(
    name='tf2_kdl',
    version='0.25.17',
    packages=find_packages(
        include=('tf2_kdl', 'tf2_kdl.*')),
)
