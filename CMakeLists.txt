cmake_minimum_required(VERSION 3.2)

project(BitString)

add_executable(lab3
	Source.cpp
	point.cpp
	figure.cpp
	rectangle.cpp
	rhombus.cpp
	trapezoid.cpp
	vector.cpp)

set_property(TARGET BitString PROPERTY CXX_STANDART 11)
