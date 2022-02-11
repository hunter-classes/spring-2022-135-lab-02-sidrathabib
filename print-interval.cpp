/* 
Author: Sidrat Habib
Course: CSCI-135 
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 2B

asks user to input two integers L and U (lower and upper)
and print out all integers in range L <= i < U seperated by spaces
include lower limit but exclude uper limit
*/

int main() {
//set integers 
    int L, U;
//collect user's input for lower limit
    std::cout << "Please enter Lower Limit: "; 
    std::cin >> L; 
//collect user's input for upper limit
    std::cout << "Please enter Upper Limit: ";
    std::cin >> U; 
//construct loop
    for(int i = L; i < U; i++) {
        std::cout << i << " ";
            // the body of the loop will get executed for 
            // all values of i starting at L
            // and ending at the largest integer less than U
    }
    return 0; 
}
