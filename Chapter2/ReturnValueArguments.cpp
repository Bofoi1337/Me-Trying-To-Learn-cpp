#include <iostream>

int getValueFromUser() // User input and returns it
{
    std::cout << " Please enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printValue(int value) // Function to print value doubled as an output
{
    std::cout << value << " doubled is " << value * 2 << '\n';

}
/*
    Main program, asks for user input 
        then prints input doubled
    This combines, which is creating 2 functions
        one that calls for an argument for something
            outside of its function 
*/
int main()
{
    printValue(getValueFromUser());

    return 0;
}