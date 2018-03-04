add_library (
    08_lib
    SHARED
    Beverage.hpp
    Beverage.cpp
    Behaviors.hpp
    Behaviors.cpp
)

add_executable (
    08_main
    main.cpp
)

target_include_directories (08_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (08_main LINK_PUBLIC 08_lib)
