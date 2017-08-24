include_directories(${PROJECT_BINARY_DIR}/proto/)

set(TARGET helloworld)
set(SRCFILES main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
add_executable(${TARGET} ${SRCFILES})
target_link_libraries(${TARGET} foo protobuf)