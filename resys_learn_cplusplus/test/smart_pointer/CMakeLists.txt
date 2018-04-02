project(relearn_cplusplus)

set(TEST_SP
    test_sp.cpp
)

#find_package(sp_lib REQUIRED)

add_executable(test_sp ${TEST_SP})
target_link_libraries(test_sp sp_lib)