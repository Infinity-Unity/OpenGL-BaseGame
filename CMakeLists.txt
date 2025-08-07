cmake_minimum_required(VERSION 4.1.0 FATAL_ERROR)

set(PROJECT_NAME OpenGL_Game)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} src/main.cpp)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} glfw)


add_subdirectory(external/glad)
target_link_libraries(${PROJECT_NAME} glad)

add_subdirectory(external/glew)
target_link_libraries(${PROJECT_NAME} glew)

#find_package(GLEW REQUIRED)
#target_link_libraries(${PROJECT_NAME} PRIVATE GLEW::GLEW)

