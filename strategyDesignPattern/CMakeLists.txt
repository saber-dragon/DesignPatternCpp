cmake_minimum_required(VERSION 3.0)

project(StrategyDesignPattern)

file(GLOB HEADERS "*.hpp")

add_executable(${PROJECT_NAME}_demo sdd_demo.cpp ${HEADERS})