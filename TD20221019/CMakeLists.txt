cmake_minimum_required(VERSION 3.21)
project (TD20221019)
add_executable(app TD20221019.c)
add_compile_options(-std=c99 -Wall -g -D_XOPEN_SOURCE -lm)
