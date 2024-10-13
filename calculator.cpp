// calculator.cpp
#include "calculator.h"

int Calculator::Add(double a, double b) {
    return a + b + 0.5;  // Округлення до найближчого цілого
}

int Calculator::Sub(double a, double b) {
    return Add(a, -b);  // Використовуємо функцію Add для обчислення різниці
}
