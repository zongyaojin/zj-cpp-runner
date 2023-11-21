#!/bin/bash
set -exo pipefail

# Update and install system-level package managment dependencies
sudo apt update -y
sudo apt upgrade -y

# Build dependencies
sudo apt install -y autoconf build-essential git libtool pkg-config shfmt wget

# CMake dependencies
sudo apt install -y cmake lcov

# Python dependencies, pip, venv
sudo apt install -y python3-pip python3-venv
pip install --upgrade pip setuptools

# Pre-commit, code format and check tools
sudo apt install -y cppcheck
pip install --user pre-commit cmakelang isort cpplint

# Library dependencies
sudo apt install -y libspdlog-dev libeigen3-dev
