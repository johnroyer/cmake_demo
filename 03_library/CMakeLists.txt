project( HelloQt )
cmake_minimum_required(VERSION 2.6)
find_package( Qt4 REQUIRED )
include_directories( ${CMAKE_CURRENT_BINARY_DIR} )

set( SRC main.cpp mainwindow.cpp )
set( HEAD mainwindow.h )
set( FORM mainwindow.ui )

qt4_wrap_cpp( HEADER_MOC ${HEAD} )
qt4_wrap_ui( FORM_HEADER ${FORM} )

include( ${QT_USE_FILE} )
add_definitions( ${QT_DEFINITIONS} )

add_executable( helloQt ${SRC} ${HEADER_MOC} ${FORM_HEADER} )
target_link_libraries( helloQt ${QT_LIBRARIES} )


