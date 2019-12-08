cmake_minimum_required(VERSION 3.15)

project(Bomberman)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)

set(PROJECT_HEADERS
        Window.h
        Game.h)

set(PROJECT_SOURCES
        main.cpp
        Window.cpp
        Game.cpp)

#qt5_wrap_cpp(PROJECT_SOURCES_MOC ${PROJECT_HEADERS})    #for qt to process class with Q_OBJECT macro

add_executable(${PROJECT_NAME} ${PROJECT_HEADERS} ${PROJECT_SOURCES} ${PROJECT_SOURCES_MOC} ${PROJECT_HEADERS_WRAPPED})

target_link_libraries(${PROJECT_NAME}
        PUBLIC
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets)