cmake_minimum_required(VERSION 3.28)

project(doodle_drawer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find QT Core module
find_package(QT NAMES QT6 QT5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(${PROJECT_NAME} src/main.cpp)

# link libraries
target_link_libraries(${PROJECT_NAME} Qt${QT_VERSION_MAJOR}::Core)


