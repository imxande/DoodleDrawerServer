cmake_minimum_required(VERSION 3.28)

project(doodle_drawer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt Core module
find_package(Qt6 6.8 REQUIRED COMPONENTS Core)

# Enable automatic MOC, UIC, and RCC handling by CMake
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Add source files
set(SOURCES
  src/main.cpp
  src/gamemanager.cpp
)

# Add header files (optional, for reference only)
set(HEADERS
  includes/gamemanager.h
)

# Add executable target first
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Add include directories after defining the target
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/includes)

# Link libraries
target_link_libraries(${PROJECT_NAME} Qt6::Core)
