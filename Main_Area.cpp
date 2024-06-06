#include <iostream>
#include "Square.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"
#include "Area.hpp"

int main() {
    bool running = true;

    while (running) {
        std::cout << "Menu:\n";
        std::cout << "1. Calculate the area of a square\n";
        std::cout << "2. Calculate the area of a triangle\n";
        std::cout << "3. Calculate the area of a circle\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                float side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                shapes::Square square(side);
                std::cout << "The area of the square is: " << Area::calculateArea(square) << std::endl;
                break;
            }
            case 2: {
                float base, height;
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                shapes::Triangle triangle(base, height);
                std::cout << "The area of the triangle is: " << Area::calculateArea(triangle) << std::endl;
                break;
            }
            case 3: {
                float radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                shapes::Circle circle(radius);
                std::cout << "The area of the circle is: " << Area::calculateArea(circle) << std::endl;
                break;
            }
            case 4:
                running = false;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
