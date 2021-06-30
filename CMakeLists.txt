cmake_minimum_required(VERSION 3.19.0)
project(embedded-intent-recognizer)

# Add C++20 standard
set(CMAKE_CXX_STANDARD 20)


include_directories(include)

file(GLOB SOURCES "src/*.cpp")
add_library(intentlib ${SOURCES}) # create static *.a library
set(LIBRARY_NAME intentlib)


set(SOURCES_MAIN "src/main/mainapp.cpp")
add_executable(intentRecognizer ${SOURCES_MAIN}) # create *.exe for main
target_link_libraries(intentRecognizer ${LIBRARY_NAME}) # link dependancy to the *.exe

