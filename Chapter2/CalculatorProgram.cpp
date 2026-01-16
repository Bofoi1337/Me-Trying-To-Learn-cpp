#include <iostream>


/*
    Basic calculator, user inputs 2 numbers along with choosing an operator
        then spits out the result of doing math 
*/

// Asks for user numbers and operator
int main()
{

    std::cout << " Welcome to the basic calculator! \n";
    // User input 1 number
    std::cout << " Please enter a number: "; 
    double num1{};
    std::cin >> num1;
    //User inputs 2nd number
    std::cout << " Please enter a second number: ";
    double num2{};
    std::cin >> num2;
    // Asks for an operator
    std::cout << " Please enter *, /, +, - for computing:  ";
    char op;
    std::cin >> op;

    double result{};

    // cases for different operators combined with the numbers the user inputted.
    switch(op) 
    {
        case '*':
        result = num1 * num2;
        std::cout << num1 << " * " << num2 << " = " << result;
        break;

        case '/':
        result = num1 / num2;
        std::cout << num1 << "/" << num2 << " = " << result;
        break;

        case '+':
        result = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << result;
        break;

        case '-':
        result = num1 - num2;
        std::cout << num1 << " - " << num2 <<  " = " << result;
        break;

        default:
        std::cout<< " Please enter a valid operator for math. ";
        break;

    }

    return 0;
}

