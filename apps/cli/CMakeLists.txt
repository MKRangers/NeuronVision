add_executable(neuronvision_cli
    main.cpp
)

target_link_libraries(neuronvision_cli
    PRIVATE neuronvision_core
    PRIVATE NeuronMetrics
)

set_target_properties(neuronvision_cli PROPERTIES
    FOLDER "apps"
)