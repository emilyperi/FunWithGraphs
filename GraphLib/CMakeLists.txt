# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.0)

# Name of the project
project(GraphLib)

# Add all the source files needed to build the executable
add_executable(GraphLib Graph.cpp DirectedGraph.cpp UndirectedGraph.cpp UndirectedGraphTest.cpp main.cpp)