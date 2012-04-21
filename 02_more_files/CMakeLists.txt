cmake_minimum_required(VERSION 2.6)

set( CMAKE_COLOR_MAKEFILE off )
set( SRC main.c hello.c )

add_executable( hello ${SRC} )
