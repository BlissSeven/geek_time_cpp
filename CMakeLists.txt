cmake_minimum_required(VERSION 3.13)
project(geek_time_cpp)

add_subdirectory(22)
add_subdirectory(23)
add_subdirectory(24)
add_subdirectory(25)
add_subdirectory(26)
add_subdirectory(27)
if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
  add_subdirectory(28)
  add_subdirectory(29)
elseif(MSVC)
  add_subdirectory(28)
  add_subdirectory(29)
endif()
add_subdirectory(30)
