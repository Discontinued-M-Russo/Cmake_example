
add_executable (Example2Test testRectangle.cpp ../src/rectangle.cpp ../src/rectangle.h)

if(Boost_FOUND)

    target_link_libraries(Example2Test ${Boost_LIBRARIES})

endif()