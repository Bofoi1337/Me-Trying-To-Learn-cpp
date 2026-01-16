#include <iostream>
/*
    Example of userfunctions working with a user input
*/

// functions asks for user input for a integer
// return value is the value the user entered 
int getUserValueInput()
{
    std::cout << " Enter an integer: ";
    double input;
    std::cin >> input;

    return input; // return the value of user input back to caller
}

int main ()
{
    double num{getUserValueInput()}; // initializes num with getUserValueInput 
    std::cout << num << " Doubled is " << num * 2 << '\n';
    return 0;
}

