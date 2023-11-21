#include <cstdio>
#include <iostream>
#include <sstream>

#include "boost/lexical_cast.hpp"
#include "eigen3/Eigen/Dense"
#include "spdlog/spdlog.h"

#include "func.hpp"

int main()
{
    spdlog::info("Hello, world!");

    Eigen::VectorXd v(3);
    v << 1, 2, 3;
    std::cout << "vector: " << v.transpose() << std::endl;

    std::stringstream ss;
    ss << v.transpose();
    spdlog::warn("vector: {}", ss.str());

    int i = boost::lexical_cast<int>("123");
    printf("i = %d\n", i);

    func();

    return 0;
}
