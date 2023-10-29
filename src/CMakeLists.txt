cmake_minimum_required(VERSION 3.7.2)

project(tema)

add_subdirectory(student)
target_include_directories(student_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/student/)

add_subdirectory(printer)
target_include_directories(student_printer_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/printer/)

add_executable(app main.cpp)

target_link_libraries(app student_library student_printer_library)