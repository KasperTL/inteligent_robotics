from setuptools import find_packages
from setuptools import setup

setup(
    name='intelligent_robotics_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('intelligent_robotics_msgs', 'intelligent_robotics_msgs.*')),
)
