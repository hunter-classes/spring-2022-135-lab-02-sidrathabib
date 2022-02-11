/* 
Author: Sidrat Habib
Course: CSCI-135 
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 2A

asks user to input an interger in the range 0 <n < 100
if the number is out of range, the program should keep 
asking to re-enter until a valid number is input
after a valid value is obtained, print this  number n^2 
*/

#include <iostream>
#include <cmath>

int main() {
//set integers
    double num; 
//construct loop (do-while)
    do {
        std::cout << "Please enter an integer: ";
        std::cin >> num; 
    }
    while ((num < 1) || (99 < num));
//allows user to re-enter until a valid num is input 
    while ((num < 1) || (99 < num)) {
        std::cout << "\nPlease re-enter: ";
        std::cin >> num;  
    } 
//cmath library is used to calculate 
    double squared = pow(num, 2); 
    std::cout << "Number squared is " << squared;

    return 0; //prints results
}
