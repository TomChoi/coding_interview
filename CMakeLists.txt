cmake_minimum_required ( VERSION 3.6.0 )

project ( cracking_the_coding_interview )

get_filename_component ( CATCH_HEADER_PATH "catch2" ABSOLUTE )

set ( CATCH_INCLUDES ${CATCH_HEADER_PATH} CACHE INTERNAL "Add a Catch2 header" )

message ( STATUS "Catch includes path: ${CATCH_INCLUDES}" )

enable_testing()
add_subdirectory ( questions )
