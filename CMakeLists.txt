cmake_minimum_required(VERSION 3.28)

project(doodle_drawer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find QT Core module
find_package(Qt6 6.8 REQUIRED COMPONENTS Core)

add_executable(${PROJECT_NAME} src/main.cpp)

# link libraries
target_link_libraries(${PROJECT_NAME} Qt${QT_VERSION_MAJOR}::Core)


