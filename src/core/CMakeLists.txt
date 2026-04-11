add_subdirectory(volume)
#add_subdirectory(segmentation)
#add_subdirectory(skeleton)
#add_subdirectory(graph)

add_library(nv_core STATIC
    nvCore.cpp
)

target_link_libraries(nv_core
    PRIVATE nv_volume
    PRIVATE NeuronMetrics
)

set_target_properties(nv_core PROPERTIES
    FOLDER "core"
)