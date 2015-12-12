cmake_minimum_required(VERSION 3.3)
project(SpendTracker)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/gui/GUI.cpp src/logic/Logic.cpp src/logic/Logic.h src/parser/Parser.cpp src/parser/Parser.h src/parser/command/Command.cpp src/parser/command/Command.h src/storage/Storage.cpp src/storage/Storage.h src/storage/account/Account.cpp src/storage/account/Account.h src/storage/StorageLoad.cpp src/storage/StorageLoad.h src/storage/StorageSave.cpp src/storage/StorageSave.h)
add_executable(SpendTracker ${SOURCE_FILES})