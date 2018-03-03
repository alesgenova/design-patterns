add_library (
    04_lib
    SHARED
    PizzaFactory.hpp
    PizzaFactory.cpp
    PizzaStore.hpp
    PizzaStore.cpp
)

add_executable (
    04_main
    main.cpp
)

target_include_directories (04_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (04_main LINK_PUBLIC 04_lib)
target_link_libraries (04_main LINK_PUBLIC 03_lib)
