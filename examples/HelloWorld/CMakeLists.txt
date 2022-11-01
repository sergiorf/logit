add_executable(HelloWorld Main.cpp)
target_link_libraries(HelloWorld logit)
set_target_properties(HelloWorld PROPERTIES FOLDER Examples)
