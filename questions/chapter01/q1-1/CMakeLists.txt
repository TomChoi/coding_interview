cmake_minimum_required( VERSION 3.0 )

project( codingTest CXX )

# set( CATCH_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/catch2 )
set( CATCH_INCLUDE_DIR ../../../../catch2 )
add_library( Catch2 INTERFACE )
target_include_directories( Catch2
  INTERFACE
  ${CATCH_INCLUDE_DIR}
)

set( TEST_SOURCE ../test_case/test_case.cpp )
add_executable( tests ${TEST_SOURCE} )
target_link_libraries( tests Catch2 )
