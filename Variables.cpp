#include <iostream>

int main(){

    //  Comment notes
    /* 
        This is a multiline comment
        Wherever 
        its needed
        For your sake, I am learning
        integer is int

        double (numbers including decimal)
    */
    int x; // declaration

    x = 5; // assignment
    int y = 6;
    int sum = x + y;
    double price = 10.5;
    int age = 25;

    //single character
    char grade = 'A';
    char symbol = 'S';

    //boolean true/false
    bool student = true;
    bool forSale = false;

    //string (More than one character)
    std::string name = "Walter White";
    std::string food = "Banana";
    std::string address = " 308 Negra Arroyo Lane";


    //outputs
    std::cout << " Hello " << name << '\n';
    std::cout << " My name is " << name << '\n';
    std::cout << " I live at " << address << '\n';
    std::cout << " You are " << age << " years old " << '\n';
    std::cout << name << '\n';
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << " The sum of 5 + 6 is " <<  sum << '\n';
    std::cout << "I like pizza!" << '\n';
    std::cout << "It's really good!" << '\n';
    return 0;
}