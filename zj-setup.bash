#!/bin/bash
set -exo pipefail

# Update system package manager
sudo apt update -y
sudo apt upgrade -y

# Build dependencies
sudo apt install -y autoconf build-essential git libtool pkg-config shfmt wget clang-format

# CMake dependencies
sudo apt install -y cmake lcov

# Python dependencies
sudo apt install -y python3-pip
pip install --upgrade pip setuptools

# Pre-commit, code formatter
sudo apt install -y cppcheck
pip install --user pre-commit cmakelang

# Common library dependencies
sudo apt install -y libspdlog-dev libeigen3-dev libboost-all-dev
