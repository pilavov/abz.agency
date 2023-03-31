cmake_minimum_required(VERSION 3.5)

project(abz_agency LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIR})


add_executable(abz_agency
main.cpp
displayuserswindow.cpp
displayuserswindow.h
displayuserswindow.ui
Api.cpp Api.h User.cpp User.h UserBuilder.cpp UserBuilder.h
)


target_link_libraries(abz_agency PRIVATE Qt5::Widgets)
target_link_libraries(abz_agency PRIVATE ${CURL_LIBRARIES})

target_include_directories(abz_agency
        PUBLIC
        ../libs/json/
        )
