#include <iostream>
/*
    Simple project from learncpp, 1.1
    Asks user for an integer, then takes that and doubles and triples it 
*/


int main()
{
    std::cout << "Please enter a integer: "; //Asks user for a number

    int x {}; // initializes a variable for holding 
    std::cin >> x; // Stores user input in variable
    
    std::cout << " Double " << x << " is " << x * 2 << '\n'; // Prints the user input doubled
    std::cout << " Triple " << x << " is " << x * 3 << '\n'; // Prints user input tripled
    return 0;
}