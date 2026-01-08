#include <iostream> // std::cout and std::cin

 /*
    std::cout << " Enter a number: "; // Ask user for a number
    int x {}; // defines variable for user input 
    std::cin >> x; // stores user input in variable
    std::cout << "You entered " << x << '\n';
 
 */

int main(){

    std::cout << " Enter 3 numbers each followed by a space: ";
    //variable initializations
    int x {};
    int y {};
    int z {};

    std::cin >> x >> y >> z; // stores keyboard input into variables

    std::cout << "You entered: " << x << ", " << y << ", and " << z << ".\n"; //prints user inputs
    
    return 0;

}

