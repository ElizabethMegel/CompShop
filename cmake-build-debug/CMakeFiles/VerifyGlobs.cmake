# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.17
cmake_policy(SET CMP0009 NEW)

# PROTO_SOURCES at CMakeLists.txt:36 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/Users/rodion/CLionProjects/Algorithms/CompShop/proto/*.proto")
set(OLD_GLOB
  "/Users/rodion/CLionProjects/Algorithms/CompShop/proto/characteristics.proto"
  "/Users/rodion/CLionProjects/Algorithms/CompShop/proto/component.proto"
  "/Users/rodion/CLionProjects/Algorithms/CompShop/proto/component_type.proto"
  "/Users/rodion/CLionProjects/Algorithms/CompShop/proto/storage.proto"
  "/Users/rodion/CLionProjects/Algorithms/CompShop/proto/worker.proto"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/rodion/CLionProjects/Algorithms/CompShop/cmake-build-debug/CMakeFiles/cmake.verify_globs")
endif()
