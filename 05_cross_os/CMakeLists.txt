cmake_minimum_required(VERSION 2.6)

set( CMAKE_COLOR_MAKEFILE off )
if(WIN32)
   set( SRC main.c win.c )
else(UNIX)
   set( SRC main.c linux.c )
endif()

add_executable( hello ${SRC} )
