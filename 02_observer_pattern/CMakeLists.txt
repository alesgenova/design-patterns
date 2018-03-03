add_library (
    02_lib
    SHARED
    Observer.hpp
    Observer.cpp
    Payload.hpp
    Payload.cpp
    Screen.hpp
    Screen.cpp
    Subject.hpp
    Subject.cpp
    WeatherStation.hpp
    WeatherStation.cpp
    WeatherPayload.hpp
    WeatherPayload.cpp
)

add_executable (
    02_main
    main.cpp
)

target_include_directories (02_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (02_main LINK_PUBLIC 02_lib)
