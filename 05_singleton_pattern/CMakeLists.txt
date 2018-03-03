add_library (
    05_lib
    SHARED
    Singleton.hpp
    Singleton.cpp
)

add_executable (
    05_main
    main.cpp
)

target_include_directories (05_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (05_main LINK_PUBLIC 05_lib)
