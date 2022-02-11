/* 
Author: Sidrat Habib
Course: CSCI-135 
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 2B
    main.cpp
    funcs.cpp
    funcs.h

asks user to input two integers L and U (lower and upper)
and print out all integers in range L <= i < U seperated by spaces
include lower limit but exclude uper limit
*/

#include <iostream>
#include "funcs.h"

//accept two integer parameters and will 
//print the output as specified in the main lab
void print_interval(int L, int U) {
    for (int i = L; i < U; i++) {
        std::cout << i << " ";
            // the body of the loop will get executed for 
            // all values of i starting at L
            // and ending at the largest integer less than U
    }
}

/*
-------------------------------------------------------
test this function by calling it from the main function 
which should be defined in main.cpp
-------------------------------------------------------
compile by typing 
g++ main.cpp funcs.cpp
run ./a.out
-------------------------------------------------------
*/
