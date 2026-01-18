#include <iostream>

//switch statements as an alternative to else if statements


int main()
{
    std::cout << " Enter a month 1-12: ";
    int month{};
    std::cin >> month;

    switch(month)
    {

    case 1:
    std::cout << " You entered January! \n";
    break;

    case 2:
    std::cout << " You entered February! \n";
    break;

    case 3:
    std::cout << " You entered March! \n";
    break;

    case 4:
    std::cout << " You entered April! \n";
    break;

    case 5:
    std::cout << " You entered May! \n";
    break;

    case 6:
    std::cout << " You entered June! \n";
    break;

    case 7:
    std::cout << " You entered July! \n";
    break;

    case 8:
    std::cout << " You entered August! \n";
    break;

    case 9:
    std::cout << " You entered September! \n";
    break;

    case 10:
    std::cout << " You entered October! \n";
    break;

    case 11:
    std::cout << " You entered November! \n";

    case 12:
    std::cout << " You entered December! \n";
    break;

    default:
    std::cout << " Not a valid number to represent a month! ";
    break;

    }

    return 0;
}