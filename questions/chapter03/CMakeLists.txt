project( chapter_02 )

get_filename_component ( LINKEDLIST_HEADER_PATH "./" ABSOLUTE )

set ( LINKEDLIST_INCLUDES ${LINKEDLIST_HEADER_PATH} )

set ( TARGET_NAME "q2-1" )
add_subdirectory ( ${TARGET_NAME} )

set ( TARGET_NAME "q2-2" )
add_subdirectory ( ${TARGET_NAME} )

set ( TARGET_NAME "q2-3" )
add_subdirectory ( ${TARGET_NAME} )

set ( TARGET_NAME "q2-4" )
add_subdirectory ( ${TARGET_NAME} )

set ( TARGET_NAME "q2-5" )
add_subdirectory ( ${TARGET_NAME} )

set ( TARGET_NAME "q2-6" )
add_subdirectory ( ${TARGET_NAME} )

set ( TARGET_NAME "q2-7" )
add_subdirectory ( ${TARGET_NAME} )

set ( TARGET_NAME "q2-8" )
add_subdirectory ( ${TARGET_NAME} )
