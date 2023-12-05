# https://medium.com/@onur.dundar1/cmake-tutorial-585dd180109b
# SPECIFY THE MINIMUM VERSION OF CMAKE REQUIRED
cmake_minimum_required(VERSION 3.27.8)
message("CXX Standard: ${CMAKE_CXX_STANDARD}")

# or use MATCHES to see if actual system name 
# Darwin is Apple's system name
if(${CMAKE_SYSTEM_NAME} MATCHES Darwin)
    message("This is a ${CMAKE_SYSTEM_NAME} system")
elseif(${CMAKE_SYSTEM_NAME} MATCHES Windows)
    message("This is a Windows System")
endif()

# SPECIFY YOUR PROJECT NAME
PROJECT(sampleCode)

# Find OpenCV in the system
find_package(OpenCV REQUIRED PATHS "/usr/local/lib/cmake/opencv4")


# INCLUDE OPENCV DIRECTORIES
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(main main.cpp)

# This command links the libraries to the executable file
target_link_libraries(main ${OpenCV_LIBS})
set_property(TARGET main PROPERTY CXX_STANDARD 14)
