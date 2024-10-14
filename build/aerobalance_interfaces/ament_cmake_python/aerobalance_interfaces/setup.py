from setuptools import find_packages
from setuptools import setup

setup(
    name='aerobalance_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('aerobalance_interfaces', 'aerobalance_interfaces.*')),
)
