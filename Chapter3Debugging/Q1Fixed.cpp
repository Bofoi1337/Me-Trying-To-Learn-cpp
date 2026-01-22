#include <iostream>

int readNumber()
{
    
	std::cout << "Please enter a number: ";
    int x{};
	std::cin >> x;
    std::cerr << " Storing number:  " << x << '\n';
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x {readNumber()};   // Problem was here, now changed to store the readNumber
	x = x + readNumber();
	writeAnswer(x);

	return 0;
}