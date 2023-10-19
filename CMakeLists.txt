cmake_minimum_required(VERSION 3.26)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_library(matematicas STATIC matematicas.cpp
        matematicas.h
        matematicas.h)
add_executable(untitled1 main.cpp
        nuevo.cpp
        nuevo.cpp
        funciones.cpp
        funciones.h
        funciones.h
        matematicas.cpp
        matematicas.cpp
        matematicas.h)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(untitled1 fmt::fmt)
target_link_libraries(untitled1 matematicas)
