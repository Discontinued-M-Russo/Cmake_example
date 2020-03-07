
add_executable (Example2Test testRectangle.cpp ../src/rectangle.cpp ../src/rectangle.h)

target_link_libraries(Example2Test ${Boost_LIBRARIES})
