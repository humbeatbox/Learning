cmake_minimum_required(VERSION 3.27)
project(arrayP C)

set(CMAKE_C_STANDARD 11)

add_executable(arrayP main.c
        report.c
        report.h
        strcuture.c
        strcuture.h
        utils.c
        utils.h)
