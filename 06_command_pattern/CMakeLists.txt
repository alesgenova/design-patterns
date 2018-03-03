#add_library (
#    06_lib
#    SHARED
#    Client.hpp
#    Command.hpp
#    Invoker.hpp
#    Receiver.hpp
#)

add_executable (
    06_main
    main.cpp
)

#target_include_directories (06_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
#target_link_libraries (06_main LINK_PUBLIC 06_lib)
