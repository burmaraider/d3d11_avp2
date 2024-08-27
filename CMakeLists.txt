cmake_minimum_required(VERSION 3.12)
project(d3dren)

# Glob all source files
file(GLOB SOURCES
    lithtech/*.cpp
    lithtech/objtypes/*.cpp
    utils/*.cpp
    render/*.cpp
)

# Include directories
include_directories(
    .
    lithtech
    lithtech/objtypes
    utils
    render
)

# Libraries
set(LIBRARIES
    d3d11
    d3dcompiler
    dxgi
    winmm
    gdi32
)

# Compiler options
if (MSVC)
    add_compile_options(/arch:SSE2 /arch:IA32)
    add_definitions(-D_MBCS)
else()
    add_compile_options(-msse -msse2 -m32)
    add_definitions(-D_MBCS)
endif()

set(CMAKE_GENERATOR_PLATFORM x86)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_library(${PROJECT_NAME} SHARED ${SOURCES} exports.def)

set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME "d3d11.ren"
    PREFIX ""
    SUFFIX ""
)

# Define the resource file and the output .res file
set(RESOURCE_FILE ${CMAKE_SOURCE_DIR}/d3d11.rc)
set(RESOURCE_OUTPUT ${CMAKE_BINARY_DIR}/d3d11.res)

# Add custom command to compile the resource script
if(WIN32)
    add_custom_command(
        OUTPUT ${RESOURCE_OUTPUT}
        COMMAND windres -i ${RESOURCE_FILE} -O coff ${RESOURCE_OUTPUT}
        DEPENDS ${RESOURCE_FILE}
        COMMENT "Compiling resource script ${RESOURCE_FILE}"
    )

    # Add the generated .res file to the target
    target_sources(${PROJECT_NAME} PRIVATE ${RESOURCE_OUTPUT})
endif()
# Add resource script to the executable
if(WIN32)
    target_sources(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/d3d11.rc)
endif()

# Link libraries
target_link_libraries(${PROJECT_NAME} ${LIBRARIES} ${RESOURCE_OUTPUT}) 

# Set linker flags for static linking
set_target_properties(${PROJECT_NAME} PROPERTIES
    LINK_FLAGS "-static-libgcc -static-libstdc++ -static"
)

# HLSL shader compilation using dxc
set(SHADER_SOURCE_DIR ${CMAKE_SOURCE_DIR}/render/shaders)
set(SHADER_BINARY_DIR ${CMAKE_BINARY_DIR}/render/shaders)

file(GLOB SHADERS ${SHADER_SOURCE_DIR}/*.hlsl)

#set(DXC_PATH "C:/dxc/x86/dxc.exe")
#
## Ensure the shader binary directory exists
#file(MAKE_DIRECTORY ${SHADER_BINARY_DIR})
#
#foreach(SHADER ${SHADERS})
#    get_filename_component(SHADER_NAME ${SHADER} NAME_WE)
#    get_filename_component(SHADER_EXT ${SHADER} EXT)
#
#    # Skip header files
#    if(SHADER_NAME MATCHES "global_header")
#        continue()
#    endif()
#    
#    if(SHADER_NAME MATCHES "VS")
#        set(SHADER_ENTRY "VSMain")
#        set(SHADER_PROFILE "vs_5_0")
#    elseif(SHADER_NAME MATCHES "PS")
#        set(SHADER_ENTRY "PSMain")
#        set(SHADER_PROFILE "ps_5_0")
#    else()
#        message("Unknown shader type for ${SHADER}")
#    endif()
#
#    add_custom_command(
#        OUTPUT ${SHADER_BINARY_DIR}/${SHADER_NAME}.cso
#        COMMAND ${DXC_PATH} -T ${SHADER_PROFILE} -E ${SHADER_ENTRY} -HV 2016 -Fo ${SHADER_BINARY_DIR}/${SHADER_NAME}.cso ${SHADER}
#        DEPENDS ${SHADER}
#        COMMENT "Compiling ${SHADER_NAME}.hlsl"
#    )
#    list(APPEND SHADER_BINARIES ${SHADER_BINARY_DIR}/${SHADER_NAME}.cso)
#endforeach()
#
#add_custom_target(Shaders ALL DEPENDS ${SHADER_BINARIES})
#add_dependencies(${PROJECT_NAME} Shaders)