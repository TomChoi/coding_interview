project( chapter_01 )

set ( CMAKE_CXX_STANDARD 11 )

add_executable ( ${PROJECT_NAME}
  q1-1/solution/answer.cpp
  q1-1/test_case/test_case.cpp
)

add_compile_options ( ${PROJECT_NAME}
  -O3
)

target_include_directories( ${PROJECT_NAME}
  PUBLIC
  ${CATCH_INCLUDES}
  q1-1/solution
)

add_test (
  NAME ${PROJECT_NAME}
  COMMAND ${PROJECT_NAME} -o report.xml -r compact
)
