from setuptools import find_packages
from setuptools import setup

setup(
    name='tf2_py',
    version='0.25.17',
    packages=find_packages(
        include=('tf2_py', 'tf2_py.*')),
)
