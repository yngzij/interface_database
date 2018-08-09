cmake_minimum_required(VERSION 3.12)
project(jock)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-L/usr/lib -lmysqlclient -lhiredis")
add_executable(jock main.cpp DBConn.cpp DBConn.h DBConnection.cpp DBConnection.h)