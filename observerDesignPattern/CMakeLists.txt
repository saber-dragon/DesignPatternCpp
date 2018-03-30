cmake_minimum_required(VERSION 3.0)

project(ObserverDesignPattern)

file(GLOB HEADERS "*.hpp")

add_executable(${PROJECT_NAME}_demo odd_demo.cpp ${HEADERS})