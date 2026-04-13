add_library(nv_graph STATIC
    nvSegmentGenerator.cpp

    nvSegmentGenerator.h
)

target_include_directories(nv_graph
    PUBLIC ${PROJECT_SOURCE_DIR}/src
)

target_link_libraries(nv_graph
    PRIVATE NeuronMetrics
)

set_target_properties(nv_graph PROPERTIES
    FOLDER "core/graph"
)