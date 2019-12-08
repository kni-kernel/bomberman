include_directories(${Bomberman_SOURCE_DIR}/inc)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)

set(PROJECT_SOURCES ../main.cpp Window.cpp Game.cpp)

#set(PROJECT_HEADERS_WITH_Q_OBJECT ../inc/Window.h)                          #for Qt to process classes with Q_OBJECT macro
#qt5_wrap_cpp(PROJECT_SOURCES_MOC ${PROJECT_HEADERS_WITH_Q_OBJECT})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES} ${PROJECT_SOURCES_MOC})

target_link_libraries(${PROJECT_NAME} PUBLIC Qt5::Core Qt5::Gui Qt5::Widgets)   #links Qt libraries to project