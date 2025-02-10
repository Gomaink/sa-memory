cmake_minimum_required(VERSION 3.10)
project(SAMemory)

set(SOURCES
    src/main.c
    src/process_utils.c
    src/addresses.c
    src/zones.c
    src/player_data.c
    src/vehicles.c
    src/weapons.c
)

add_executable(samemory ${SOURCES})

if(WIN32)
    target_link_libraries(samemory psapi)
    set_target_properties(samemory PROPERTIES SUFFIX ".exe")
elseif(UNIX)
    target_link_libraries(samemory psapi)
endif()

add_custom_target(clean-all
    COMMAND ${CMAKE_COMMAND} -E rm -f ${CMAKE_BINARY_DIR}/samemory
    COMMENT "Removing all build files"
)
