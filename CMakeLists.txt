cmake_minimum_required(VERSION 3.10)
project(Calc C)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_C_COMPILER "/opt/sparc-bcc-2.3.1-gcc/bin/sparc-gaisler-elf-gcc")

# Include QEMU 
include(qemu.cmake)

# Include header files
include_directories(include)

# List source files manually
set(SRC_FILES
    src/main.c
    src/calc.c
)

# Create main executable
add_executable(${PROJECT_NAME} ${SRC_FILES})
