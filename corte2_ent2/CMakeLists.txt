cmake_minimum_required(VERSION 3.10)

project(corte2_ent2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(crypto_square
    tests/crypto_square_main.cpp
    exercism/crypto-square/crypto_square.cpp
)

add_executable(bank_account
    tests/bank_account_main.cpp
    exercism/bank-account/bank_account.cpp
)

add_executable(authentication_manager
    tests/authentication_manager_main.cpp
)

add_executable(exam_tracker
    tests/exam_tracker_main.cpp
)
