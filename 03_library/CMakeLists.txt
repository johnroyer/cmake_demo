project( qt )

cmake_minimum_required(VERSION 2.6)
find_package( Qt4 REQUIRED )

include( ${QT_USE_FILE} )
add_definitions( ${QT_DEFINITIONS} )

set ( SRC qt.cpp )

add_executable( qt ${SRC} )
target_link_libraries( qt ${QT_LIBRARIES} )
