add_library (
    03_lib
    SHARED
    Pizza.hpp
    Pizza.cpp
    PizzaDecorator.hpp
    PizzaDecorator.cpp
    Styles.hpp
    Styles.cpp
    Toppings.hpp
    Toppings.cpp
)

add_executable (
    03_main
    main.cpp
)

target_include_directories (03_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (03_main LINK_PUBLIC 03_lib)

