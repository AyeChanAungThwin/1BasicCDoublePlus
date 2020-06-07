cmake_minimum_required(VERSION 3.16)
project(C++Basics)

set(CMAKE_CXX_STANDARD 20)

#Link to download latest version -> https://sourceforge.net/projects/boost/files/boost/
#Add url to download manager to auto download --> https://nchc.dl.sourceforge.net/project/boost/boost/1.66.0/boost_1_66_0.tar.bz2
#include_directories("/usr/boost_1_66_0") #use this if you use boost library
add_executable(C++Basics App.cpp)