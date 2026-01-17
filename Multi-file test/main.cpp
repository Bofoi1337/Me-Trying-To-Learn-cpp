#include <iostream>


int add(int, int); // declaration that this exists, not here, in a different file

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // compile error
    return 0;
}