
set ( CMAKE_CXX_STANDARD 11 )

add_executable ( ${TARGET_NAME}
  test_case/test_case.cpp
)

add_compile_options ( ${TARGET_NAME}
  -O3
)

target_include_directories( ${TARGET_NAME}
  PUBLIC
  ${CATCH_INCLUDES}
)

add_custom_target ( ${TARGET_NAME}_test ALL
  COMMAND ${CMAKE_CURRENT_BINARY_DIR}/${TARGET_NAME} -r console
  DEPENDS ${TARGET_NAME}
)
