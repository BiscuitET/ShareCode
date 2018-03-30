project(smart_pointer)

set(TEST_DIR
    smart_p.cpp
)

#find_package(src_lib REQUIRED)

add_executable(test_main ${TEST_DIR})
target_link_libraries(test_main src_lib)