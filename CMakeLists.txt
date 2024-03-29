cmake_minimum_required(VERSION 3.26)
project(navchPractika)

set(CMAKE_CXX_STANDARD 17)

add_executable(navchPractika main.cpp
        Transport.h
        Car.cpp
        Car.h
        Car.cpp
        Airplane.cpp
        Airplane.h
        RoadTrip.cpp
        RoadTrip.h
        BeachVacation.cpp
        BeachVacation.h
        Trip.cpp
        Trip.h)
