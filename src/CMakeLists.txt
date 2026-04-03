add_subdirectory(core)
#add_subdirectory(utils)

add_library(neuronvision_core STATIC
    nvCoreAPI.cpp
)

target_link_libraries(neuronvision_core
    PRIVATE nv_core
)

target_include_directories(neuronvision_core
    PUBLIC
        ${PROJECT_SOURCE_DIR}/src
        ${PROJECT_SOURCE_DIR}/include
)

# Visual Studio organization
set_target_properties(nv_core PROPERTIES FOLDER "core")
#set_target_properties(nv_utils PROPERTIES FOLDER "core/utils")

