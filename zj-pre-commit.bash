#!/bin/bash
set -exo pipefail

script_file=$(realpath "$0")
package_path=$(dirname "$script_file")

# Install pip
sudo apt install -y python3-pip

# Upgrade pip and setuptools (included in Python installation)
pip install --upgrade pip setuptools

# Install pre-commit
pip install --user pre-commit

# Go to the package path, set up and run pre-commit
(
    cd $package_path
    pre-commit install
    pre-commit autoupdate
    pre-commit run -a
)
