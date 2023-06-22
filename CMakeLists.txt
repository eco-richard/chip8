cmake_minimum_required(VERSION 3.21)

if (NOT DEFINED CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(chip8-emulator
  HOMEPAGE_URL "https://github.com/eco-richard/chip8"
  LANGUAGES CXX)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
