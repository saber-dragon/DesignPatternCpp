cmake_minimum_required(VERSION 3.0)

project(FactoryDesignPattern)

file(GLOB HEADERS "*.hpp")

add_executable(${PROJECT_NAME}_demo fdd_demo.cpp ${HEADERS})