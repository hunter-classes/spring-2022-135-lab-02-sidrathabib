/* 
Author: Sidrat Habib
Course: CSCI-135 
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 2B Tests
    main.cpp
    funcs.cpp
    funcs.h

asks user to input two integers L and U (lower and upper)
and print out all integers in range L <= i < U seperated by spaces
include lower limit but exclude uper limit
*/

#include <iostream>
#include "funcs.h" //header file declares function

int main () {
//calls functions with parameters 
    print_interval(4, 8); 
    std::cout << "\n";
    print_interval(2, 2);
    std::cout << "\n";
    print_interval(15, 20);
    std::cout << "\n";
    print_interval(-5, -5); 
    std::cout << "\n";
    print_interval(30, -15);    

    return 0; //prints results 
}
