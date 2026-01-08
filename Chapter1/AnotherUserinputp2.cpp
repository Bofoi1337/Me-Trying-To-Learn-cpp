#include <iostream>

int main ()
{
    std::cout << "Please enter a number "; // Asks user for a number
    int x {}; // Initializes variable for holding
    std::cin >> x; //Stores it

    std::cout << "Please enter a second number "; //Asks for a second number
    int y {}; // INitializes it for holding
    std::cin >> y; // Stores it

    std::cout << x << " + " << y << " is " << x + y << ".\n"; // Prints an addition with the 2 numbers
    std::cout << x << " - " << y << " is " << x - y << ".\n"; // Prints a subtraction with the 2 numbers
    return 0;
}