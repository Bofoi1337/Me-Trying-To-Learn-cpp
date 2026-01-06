#include <iostream>
/* Const keyword specifices that a variable's value is constant 
tells the compiler to prevent anything from modifying it
making it (read only)

    namespace allows for identically named entities as long as namespaces are different
    for larger projects, prevents name conflicts

    using namespace () automatically refers to that namespace and would need to prefix other namespaces

    using namespace std;


*/

namespace  first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main () {
    int x = 5;
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm" << '\n';

    std::cout << first::x << '\n';
    std::cout << second::x << '\n';

    return 0;
}