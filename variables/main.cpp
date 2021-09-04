#include <iostream>

int main()
{
    int width;
    width = 5; // copy assignment of value 5 into variable width

    // variable width now has value 5

    width = 7; // change value stored in variable width to 7

    // variable width now has value 7

    std::cout << "The width is " << width << std::endl; // ah ha

    int height{ 9 }; //initalizes a new heigh variable and assigns value 9 using direct list assignment

    std::cout << "The height is " << height;

    return 0;
}
