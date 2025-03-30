# 收集源文件
file(GLOB SOURCES "*.cpp")

# 创建LegoVm库
add_library(LegoVm STATIC ${SOURCES})

# 设置包含目录
target_include_directories(LegoVm
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
) 