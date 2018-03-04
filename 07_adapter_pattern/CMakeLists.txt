add_library (
    07_lib
    SHARED
    Turkey.hpp
    Turkey.cpp
    DuckAdapter.hpp
    DuckAdapter.cpp
)

add_executable (
    07_main
    main.cpp
)

target_include_directories (07_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (07_lib LINK_PUBLIC 01_lib)
target_link_libraries (07_main LINK_PUBLIC 07_lib)
target_link_libraries (07_main LINK_PUBLIC 01_lib)

