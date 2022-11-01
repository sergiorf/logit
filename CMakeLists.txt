# Copyright(c) 2022 logit authors Distributed under the MIT License (http://opensource.org/licenses/MIT)

cmake_minimum_required(VERSION 3.0)

project(LogIt VERSION 0.0.1 LANGUAGES CXX)
set(PROJECT_DESCRIPTION "Header-only C++ logging library")
set(PROJECT_URL "https://github.com/sergiorf/logit")

message(STATUS "Build LogIt")

# ---------------------------------------------------------------------------------------
# Header only library
# ---------------------------------------------------------------------------------------
add_library(logit INTERFACE)
target_include_directories(logit INTERFACE "${CMAKE_CURRENT_LIST_DIR}/include")
target_sources(logit INTERFACE 
    "${CMAKE_CURRENT_LIST_DIR}/include/LogIt/Logger.h"
)
add_custom_target(logit_ SOURCES 
    "${CMAKE_CURRENT_LIST_DIR}/include/LogIt/Logger.h"
)

add_subdirectory(Examples)

FIND_PROGRAM(CLANG_FORMAT "clang-format")
IF(CLANG_FORMAT)
	set(CHECK_CXX_SOURCE_FILES
	)

    ADD_CUSTOM_TARGET(
        reformat
        COMMAND
        ${CLANG_FORMAT}
        -i
        -style=file
        ${CHECK_CXX_SOURCE_FILES}
        COMMENT "Auto formatting of all source files"
    )
ENDIF()