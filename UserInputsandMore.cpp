#include <iostream> // for std::cout and std::cin
// Testing out user inputs
int main() {

std::cout << "Enter your name: "; // Asks user for name

 std::string firstName;  // stores first name separates input into 2
 std::string lastName;   //stores last name

 std::cin >> firstName; //stores first name set by user
 std::cin >> lastName;  //stores last name set by user from white space

 std::cout << " Hello, your name is: " << firstName << " " << lastName << '\n'; //Prints out user input 

std::cout << "Enter a number: "; //Asks user for number

int z{}; // variable for holding and initializes

std::cin >> z; // Stores user input in z

std::cout << "You entered: " << z << '\n'; // Prints out user input store in z 

std::cout << "Enter 2 numbers separated by a space: "; // Asks user for 2 inputs

int x{}; // Holds 1 variable and initializes
int y{}; // Holds another variable and initializes

std::cin >> x >> y; // Stores input in the 2 variables
std::cout << "You entered: " << x << " And " << y << '\n'; // Prints out user input

 return 0;
}