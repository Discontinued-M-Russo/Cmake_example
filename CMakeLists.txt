cmake_minimum_required(VERSION 3.9)
project(Test2)

set(CMAKE_CXX_STANDARD 14)

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