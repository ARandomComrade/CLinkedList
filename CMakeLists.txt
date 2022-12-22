cmake_minimum_required(VERSION 3.20)
project(linkedlist)

set(CMAKE_C_STANDARD 90)

add_executable(list main.c snode.c dnode.c)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
