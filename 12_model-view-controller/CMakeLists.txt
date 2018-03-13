add_library (
    12_lib
    SHARED
    
)

add_executable (
    12_main
    main.cpp
)

target_include_directories (12_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (12_main LINK_PUBLIC 12_lib)
