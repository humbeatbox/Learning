cmake_minimum_required(VERSION 3.27)
project(prg1 C)

set(CMAKE_C_STANDARD 11)

add_executable(prg1 main.c
        utils.c
        utils.h)
