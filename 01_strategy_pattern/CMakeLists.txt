add_library (
    01_lib
    SHARED
    Duck.hpp
    Duck.cpp
    FlyBehavior.hpp
    FlyBehavior.cpp
    QuackBehavior.hpp
    QuackBehavior.cpp
    DuckCall.hpp
    DuckCall.cpp
)

add_executable (
    01_main
    main.cpp
)

target_include_directories (01_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (01_main LINK_PUBLIC 01_lib)
