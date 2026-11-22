cmake_minimum_required(VERSION 3.23)

project(EasyCli
    VERSION 1.0.0
    LANGUAGES CXX
)
# 创建可执行程序
add_executable(EasyCli)
target_sources(EasyCli
  PRIVATE
    src/main.cpp
)

# C++ 标准
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 查找第三方库
find_package(nlohmann_json CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(argparse CONFIG REQUIRED)



# 配置头文件目录
target_include_directories(EasyCli
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

# 链接第三方库
target_link_libraries(EasyCli
    PRIVATE
        nlohmann_json::nlohmann_json
        spdlog::spdlog
        argparse::argparse
)