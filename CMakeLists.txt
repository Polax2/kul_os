cmake_minimum_required(VERSION 3.29)
project(clabgccb)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(clabgccb
    file.h
    main.c
    MakeFile)
