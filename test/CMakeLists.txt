set(BOOST_ROOT /usr/local/cellar/boost/1.66.0)
set(BOOST_LIBRARYDIR /usr/local/cellar/boost/1.66.0/lib)
set(BOOST_INCLUDEDIRS /usr/local/cellar/boost/1.66.0/include/boost)

find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

include_directories ($(BOOST_ROOT))
include_directories ($(BOOST_LIBRARYDIR))
include_directories ($(BOOST_INCLUDEDIRS))
include_directories (../src)

add_executable (Example2Test testRectangle.cpp ../src/rectangle.cpp ../src/rectangle.h)

if(Boost_FOUND)

    target_link_libraries(Example2Test ${Boost_LIBRARIES})

endif()