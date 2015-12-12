cmake_minimum_required(VERSION 3.3)
project(SpendTracker)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES gui/GUI.cpp logic/Logic.cpp logic/Logic.h parser/Parser.cpp parser/Parser.h parser/command/Command.cpp parser/command/Command.h storage/Storage.cpp storage/Storage.h)
add_executable(SpendTracker ${SOURCE_FILES})