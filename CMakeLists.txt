cmake_minimum_required(VERSION 3.19.0)
project(embedded-intent-recognizer)

# Add C++17 standard
set(CMAKE_CXX_STANDARD 17)
if(MSVC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
endif(MSVC)


include_directories(include)

file(GLOB SOURCES "src/*.cpp")
add_library(intentlib ${SOURCES}) # create static *.a library
set(LIBRARY_NAME intentlib)


set(SOURCES_MAIN "src/main/mainapp.cpp")
add_executable(intentRecognizer ${SOURCES_MAIN}) # create *.exe for main
target_link_libraries(intentRecognizer ${LIBRARY_NAME}) # link dependancy to the *.exe

