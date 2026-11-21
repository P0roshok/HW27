cmake_minimum_required(VERSION 4.4)
project(HW27)

set(CMAKE_CXX_STANDARD 26)

add_executable(HW27 main.cpp
        Passport.cpp
        Passport.h
        Visa.cpp
        Visa.h
        ForeignPassport.cpp
        ForeignPassport.h)
