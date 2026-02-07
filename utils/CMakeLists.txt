add_library(tools STATIC
        printing_tools.cc
)

target_include_directories(tools PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

#target_link_libraries(tools glad_lib glfw GL dl)