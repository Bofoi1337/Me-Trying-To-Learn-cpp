#include <iostream>

int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x {};
	readNumber(x);  // Problem here, initialized but nothing done, its gets discarded 
	x = x + readNumber(x);
	writeAnswer(x);

	return 0;
}