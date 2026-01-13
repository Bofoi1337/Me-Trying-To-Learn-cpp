#include <iostream>

int getUserInput() // User input function
{
    std::cout << " Enter a number to be doubled: ";
    int input{};
    std::cin >> input;

    return input;

}
int doubleNumber(int x) // Doubles value 
{
    return x * 2;
}

int main()
{
    std::cout << doubleNumber(getUserInput());

    return 0;
}