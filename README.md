# ZJ C++ Runner

[![C++ Build](https://github.com/zongyaojin/zj-cpp-runner/actions/workflows/cpp-build.yml/badge.svg)](https://github.com/zongyaojin/zj-cpp-runner/actions/workflows/cpp-build.yml)
[![GitHub license](https://img.shields.io/badge/license-Apache--2.0-blue.svg)](https://github.com/zongyaojin/zj-cpp-runner/blob/main/LICENSE)

A simple skeleton project to build and run some basic C++ code. The `CMakeLists.txt` assumes the following folder structure:

```text
$package/
    |-- kitchen/
        |-- main.cpp    (* main function file)
        |-- *.cpp       (* other source files)
        |-- *.hpp       (* any header files)
    |-- CMakeLists.txt
```

The `$package` requires Ubuntu 22.04. It installs and finds `Boost`, `Eigen3`, `spdlog`, and compiles with `c++23` and `c17`. To set up and run the project:

```text
> bash ./zj-setup.bash
> bash ./zj-pre-commit.bash

> mkdir -p build
> cd build

> cmake .. && make
> ./zj-cpp-runner
```
