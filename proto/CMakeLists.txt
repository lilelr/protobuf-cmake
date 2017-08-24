project(hello)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_VERBOSE_MAKEFILE ON)

find_package(Protobuf REQUIRED)
PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS kv.proto)
add_library(foo ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(foo ${PROTOBUF_LIBRARIES} pthread)