cmake_minimum_required(VERSION 3.0)

project(RTTI
    VERSION 0.1
    LANGUAGES CXX
    DESCRIPTION "A sample app to showcase the usage of the time core"
)


# add_executable(${PROJECT_NAME} ./src/typeid_operator.cpp ./src/dynamic_cast.cpp)
add_executable(${PROJECT_NAME}  ./src/dynamic_cast.cpp)
