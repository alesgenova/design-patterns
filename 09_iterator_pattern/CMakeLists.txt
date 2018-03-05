add_library (
    09_lib
    SHARED
    MenuItem.hpp
    MenuItem.cpp
    Menu.hpp
    Menu.cpp
    Iterator.hpp
    Iterator.cpp
)

add_executable (
    09_main
    main.cpp
)

target_include_directories (09_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (09_main LINK_PUBLIC 09_lib)
