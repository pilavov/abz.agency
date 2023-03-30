cmake_minimum_required(VERSION 3.25)
project(abz_agency)

set(CMAKE_CXX_STANDARD 14)

find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIR})


add_executable(abz_agency main.cpp Api.cpp Api.h User.cpp User.h UserBuilder.cpp UserBuilder.h)

target_link_libraries(abz_agency ${CURL_LIBRARIES})

target_include_directories(abz_agency
        PUBLIC
        ../libs/json/
        )

