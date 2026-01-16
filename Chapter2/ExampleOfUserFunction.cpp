#include <iostream>
/*
    Program doesnt work, keeping things in mind:
    void does not with the user input, it terminates after initializing a variable
    when we call for the getvalueFromUser, again, it stores the variable but terminates after 
        getValue is done
    we want to change the void into int, and return input in order to something with it
*/ 

void getValueFromUser() //Doesnt work because void returns nothing
{
    std::cout << " Enter an integer: ";
    int input{};
    std::cin >> input;

}

int main()
{
    getValueFromUser();
    
    std::cout << input << " doubled is: " << input * 2 << '/n'; // user function return and printed
}

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)

/*
int returnFive()
{
    // the return statement provides the value that will be returned
    return 5; // return the value 5 back to the caller
}

int main()
{
    std::cout << returnFive() << '\n'; // prints 5
    std::cout << returnFive() + 2 << '\n'; // prints 7

    returnFive(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it

    return 0;
}
*/
