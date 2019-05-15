# cmake_minimum_required(VERSION <specify CMake version here>)
project(LibrarySystem_FinalProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(LibrarySystem)
include_directories(LibrarySystem/Model)

add_executable(LibrarySystem_FinalProject
        LibrarySystem/Model/book.cpp
        LibrarySystem/Model/book.h
        LibrarySystem/Model/category.cpp
        LibrarySystem/Model/category.h
        LibrarySystem/Model/transaction.cpp
        LibrarySystem/Model/transaction.h
        LibrarySystem/Model/user.cpp
        LibrarySystem/Model/user.h
        LibrarySystem/library_system.cpp
        LibrarySystem/library_system.h
        LibrarySystem/library_system_ui.cpp
        LibrarySystem/library_system_ui.h
        LibrarySystem/main.cpp)