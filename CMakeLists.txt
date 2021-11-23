cmake_minimum_required(VERSION 3.17)
project(uni_cal C)

set(CMAKE_C_STANDARD 99)

add_executable(uni_cal main.c basic_cal.c basic_cal.h index.c main.h advance_cal.c advance_cal.h)