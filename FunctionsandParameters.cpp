#include <iostream>

/*
    This makes the main function more simple,
    by making 2 functions,
     one for user input
     one to print the output doubled
*/

int getValueFromUser() //function to allow user input
{
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;

    return x;
}

void printValue(int num) //function that prints out the userinput
{
    std::cout << num << " doubled is " << num * 2 << '\n';
}
    /* Above function allows for other values to be called from being returned,
        since a function can't call other functions outside of it.
    */

int main() // main function calling for user input and displaying it 
{
    printValue(getValueFromUser());
    
    return 0;
}