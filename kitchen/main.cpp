#include <cstdio>
#include <iostream>
#include <sstream>

#include "boost/lexical_cast.hpp"
#include "eigen3/Eigen/Dense"
#include "spdlog/spdlog.h"

#include <stack>
#include "func.hpp"

using namespace std;

class CatalanSequence
{
public:
    CatalanSequence(int n) { generate(n, 0, ""); }

    void generate(int open, int close, string output)
    {
        if (open == 0 && close == 0) {
            spdlog::info("{}", output.c_str());
            return;
        }

        if (open > 0) generate(open - 1, close + 1, output + "(");
        if (close > 0) generate(open, close - 1, output + ")");
    }
};

int main(int argc, char* argv[])
{
    func();

    int n = 3;
    if (argc > 1) n = boost::lexical_cast<int>(argv[1]);

    CatalanSequence obj(n);
    return 0;
}
