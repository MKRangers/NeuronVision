cmake_minimum_required(VERSION 3.21)

project(NeuronVision VERSION 0.0.0 LANGUAGES CXX)

# Use modern C++ standards
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Better folder organization in VS
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Compiler warnings
if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(VTK REQUIRED)

# Add submodules
add_subdirectory(src)
add_subdirectory(apps/cli)

# Set the installation prefix to a local directory within the project
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/install
    CACHE PATH "Installation directory" FORCE
)

