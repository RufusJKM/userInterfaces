cmake_minimum_required(VERSION 3.16)

project(hbox VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

qt_add_executable(hbox
    main.cpp
)

target_link_libraries(hbox PRIVATE Qt6::Widgets)

set_target_properties(hbox PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE OFF
)