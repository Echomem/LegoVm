# 收集测试源文件
file(GLOB TEST_SOURCES "*.cpp")

# 为每个测试文件创建可执行文件
foreach(TEST_SOURCE ${TEST_SOURCES})
    get_filename_component(TEST_NAME ${TEST_SOURCE} NAME_WE)
    add_executable(${TEST_NAME} ${TEST_SOURCE})
    
    # 链接LegoVm库
    target_link_libraries(${TEST_NAME}
        PRIVATE
            LegoVm
    )
    
    # 设置包含目录
    target_include_directories(${TEST_NAME}
        PRIVATE
            ${CMAKE_SOURCE_DIR}/include
    )
endforeach() 