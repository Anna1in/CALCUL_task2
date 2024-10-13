// main.cpp
#include <iostream>
#include "calculator.h"

int main() {
    double x = 5.0, y = 3.0;
    Calculator calc;
    std::cout << "Sum: " << calc.Add(x, y) << std::endl;
    std::cout << "Difference: " << calc.Sub(x, y) << std::endl;
    return 0;
}
