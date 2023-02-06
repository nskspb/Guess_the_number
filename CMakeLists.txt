cmake_minimum_required(VERSION 3.5)

project(3_homework CXX)

add_executable(Guess_the_number
        main.cpp
        check_value.cpp
        random_value.cpp
        high_scores.cpp
        )

add_executable(test
        test.cpp)



set_target_properties(Guess_the_number PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        )



if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
        CMAKE_CXX_COMPILER_ID STREQUAL "GNU")

    target_compile_options(Guess_the_number PRIVATE -Wall -Wextra -Werror -pedantic)

elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")

    target_compile_options(Guess_the_number PRIVATE /EHsc /W4 /WX)

endif()