#include <iostream>
#include "Rectangle.hpp"

int main() {

    Rectangle rect1;
    float length, width;
    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width;
    rect1.setLength(length);
    rect1.setWidth(width);
    std::cout << "The area of the first rectangle is: " << rect1.area() << std::endl;
    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width;

    Rectangle rect2(length, width);
    std::cout << "The area of the second rectangle is: " << rect2.area() << std::endl;

    return 0;
}
