cmake_minimum_required(VERSION 3.9)
project(Test2)

set(CMAKE_CXX_STANDARD 14)

#NOTE: these need to change based on enviorment - either find a way to express as environment variable or bundle in the external libraries
set(BOOST_ROOT /usr/local/cellar/boost/1.66.0)
set(BOOST_LIBRARYDIR /usr/local/cellar/boost/1.66.0/lib)
set(BOOST_INCLUDEDIRS /usr/local/cellar/boost/1.66.0/include/boost)

find_package(Boost COMPONENTS system filesystem unit_test_framework
        log log_setup thread REQUIRED)

include_directories ($(BOOST_ROOT))
include_directories ($(BOOST_LIBRARYDIR))
include_directories ($(BOOST_INCLUDEDIRS))
include_directories (src)

add_subdirectory(test)

add_executable(Example2 main.cpp src/rectangle.cpp src/rectangle.h src/simpleLogger.cpp src/simpleLogger.h)

if(Boost_FOUND)

    target_link_libraries(Example2 ${Boost_LIBRARIES})

endif()