#include <iostream>
#include <string>
// This is supposed to be a simple asking if they are gay program
//User inputs yes or not, and displays whether you are/arenot

// User input for gay or no
std::string askGay()
{
    std::cout << "Are you gay? (Yes or No) ";
    std::string input; // initializes string input
    std::cin >> input; // stores user input as string


    return input; //returns string input for other functions to use

}

/*
    Takes user input from different function to determine if gay
    Having a hard time here, code below I am trying to figure out
*/
void determineGay(std::string answer)
{
    answer == "yes" ? std::cout << " You are gay " : std::cout << " You are not gay";
}

// What the main SHOULD look like, 
int main()
{
    determineGay(askGay());

    return 0;
}