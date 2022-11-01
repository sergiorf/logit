
# Copyright(c) 2022 logit authors Distributed under the MIT License (http://opensource.org/licenses/MIT)

add_executable(HelloWorld Main.cpp)

set_target_properties(HelloWorld PROPERTIES FOLDER Examples)

# Link with header-only library
target_link_libraries(HelloWorld PUBLIC logit)
