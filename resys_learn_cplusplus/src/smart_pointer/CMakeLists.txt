project(relearn_cplusplus)

set(SP_DIR
    smart_pointer.cpp
)

add_library(sp_lib SHARED ${SP_DIR})