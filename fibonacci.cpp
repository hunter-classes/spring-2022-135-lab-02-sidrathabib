/* 
Author: Sidrat Habib
Course: CSCI-135 
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 2D

uses an array of ints to compute and print
all Fibonacci numbers from F(0) to F(59)
*/

#include <iostream>

int main() {
//make an array
    int fib[60];
// first two terms are given
    fib[0] = 0; //index 0 value o
    fib[1] = 1; //index 1 value 1
        std::cout << fib[0] << "\n";
        std::cout << fib[1] << "\n";
// and all the following ones can be computed iteratively as
    for (int i = 2; i <60; i++) {
//updates array with fibonacci and prints 
        fib[i] = fib[i - 1] + fib[i - 2];
        std::cout << fib[i] << " \n";
    }
    return 0; //prints result
}
