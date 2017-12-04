cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
add_executable(build_test main.cpp)

SET(CPACK_GENERATOR "DEB")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "Ilia Sobolev")

INCLUDE(CPack)