add_library(nv_volume STATIC
    nvVolume.cpp

    nvVolume.h
)

target_include_directories(nv_volume
    PUBLIC ${PROJECT_SOURCE_DIR}/src
)

target_link_libraries(nv_volume
    PUBLIC ${VTK_LIBRARIES}
)

vtk_module_autoinit(
    TARGETS nv_volume
    MODULES ${VTK_LIBRARIES}
)

set_target_properties(nv_volume PROPERTIES
    FOLDER "core/volume"
)