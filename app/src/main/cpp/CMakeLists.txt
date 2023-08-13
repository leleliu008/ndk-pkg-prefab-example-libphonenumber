cmake_minimum_required(VERSION 3.14)

project(app CXX)

add_library(app SHARED app.cpp)

find_package (libphonenumber REQUIRED CONFIG)
target_link_libraries(app libphonenumber::libphonenumber.so)

find_package (libprotobuf REQUIRED CONFIG)
target_link_libraries(app libprotobuf::headers)

find_package (abseil REQUIRED CONFIG)
target_link_libraries(app abseil::headers)

#target_link_libraries(app -llog)
