#include <iostream>

int main(){

     // int a = 5, int b =5 ; //should be error since the way it is written is wrong
     int a = 5, b = 5; // this is correct but not recommended
     int c = 6; // more readable
     double d = 3.2;

    std::cout << a << " " << b << '\n';
    std::cout << " Value of c is " << c << '\n';
    std::cout << " Value of d is " << d << '\n';
    return 0;
}