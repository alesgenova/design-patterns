cmake_minimum_required(VERSION 3.5)

project(Duck)


IF(NOT CMAKE_CONFIGURATION_TYPES AND NOT CMAKE_BUILD_TYPE)
   SET(CMAKE_BUILD_TYPE RelWithDebInfo)
ENDIF(NOT CMAKE_CONFIGURATION_TYPES AND NOT CMAKE_BUILD_TYPE)


if (CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    SET(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra -Wpedantic")
    SET(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")
    SET(CMAKE_CXX_FLAGS_RELEASE "-O2")
    SET(CMAKE_CXX_FLAGS_DEBUG  "-O0 -g --coverage")
elseif (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    
elseif (CMAKE_CXX_COMPILER_ID MATCHES "Intel")

elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang")

endif()

add_executable (
    main
    Duck.hpp
    Duck.cpp
    FlyBehavior.hpp
    FlyBehavior.cpp
    main.cpp
)