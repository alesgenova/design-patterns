add_library (
    10_lib
    SHARED
    Machine.hpp
    Machine.cpp
    State.hpp
    State.cpp
)

add_executable (
    10_main
    main.cpp
)

target_include_directories (10_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (10_main LINK_PUBLIC 10_lib)
