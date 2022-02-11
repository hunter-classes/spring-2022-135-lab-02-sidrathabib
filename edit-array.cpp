/* 
Author: Sidrat Habib
Course: CSCI-135 
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 2C

creates an array of 10 integers
provides user with interface to edit any of its elements
*/

#include <iostream>

int main() {
//set integers 
    const int size = 10;
    int myData[size];
    int i, v = 0; 

    for (int i = 0; i < 10; i++) {
        myData[i] = 1; //make array and fill it with 1
    }
//construct loop
    do {
        std::cout << "\n"; //print the array 

        for (i = 0; i < 10; i++) { //get i and v from the user
            std::cout << myData[i] << " "; //if i is good, update the array at index i
        }
//user inputs for index and value
        std::cout << "\n Input index: ";
        std::cin >> i;
        std::cout << "Input value: ";
        std::cin >> v;
//updates index and value inputs 
        if (0 <= i && i <10) {
            myData[i] = v; 
        }
    } 
//runs until user inputs an out-of-range (invalid) index 
    while (0 <= i && i < 10);
    std::cout << "\n Index out of rage. Exit.\n";

    return 0; //print result 
}

// $ ./edit-array
