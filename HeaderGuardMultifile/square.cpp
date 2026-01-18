#include "square.h"  // square.h is included once here


int getSquareSides() // definition of Square
{
    return 4;
}
int getSquarePerimeter(int sideLength)
{
    return sideLength * getSquareSides();
}