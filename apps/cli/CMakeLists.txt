add_executable(neuronvision_cli
    main.cpp
)

target_link_libraries(neuronvision_cli
    PRIVATE neuronvision_core
)

set_target_properties(neuronvision_cli PROPERTIES
    FOLDER "apps"
)