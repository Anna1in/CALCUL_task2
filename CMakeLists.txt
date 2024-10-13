# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(MyCalculator)

# Вказати стандарт C++
set(CMAKE_CXX_STANDARD 11) 

# Додати бібліотеку
add_library(calculator STATIC calculator.cpp)

# Виконуваний файл
add_executable(my_program main.cpp)

# Лінкувати бібліотеку з виконуваним файлом
target_link_libraries(my_program calculator)
