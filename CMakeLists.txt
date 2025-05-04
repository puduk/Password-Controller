cmake_minimum_required(VERSION 4.0)
project(Password_Controller)

set(CMAKE_CXX_STANDARD 20)

add_executable(Password_Controller main.cpp Password/first_page.cpp Password/create_account.cpp
        Password/sign_in.cpp Password/data.cpp Password/quit.cpp Password/help.cpp
        Password/forget_password.cpp


)
