#include <iostream>
#include <cmath>

using namespace std;

// Function inputs
double TriangleArea(double base, double height);
double RectangleArea(double length, double width);
double SquareArea(double side);

int main() {
    char choice;
    double base, height, length, width, side;

    do {
        cout << "Please select the area of the shape to:" << endl;
        cout << "1. Triangle\n2. Rectangle\n3. Square\n4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            // For Area of Triangle
            case '1':
                cout << "Please enter the base and height of the triangle: ";
                cin >> height >> base;
                cout << "Area of the triangle: " << TriangleArea(height, base) << endl;
                break;
            //  For Area of Rectangle   
            case '2':
                cout << "Please enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of the rectangle: " << RectangleArea(length, width) << endl;
                break;
            // For Area of Square    
            case '3':
                cout << "Please enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << SquareArea(side) << endl;
                break;
            // For quitting the program     
            case '4':
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while(choice != '4');

    return 0;
}

// Function that calculates the area of a triangle
double TriangleArea(double base, double height) {
    return base/2 * height;
}

// Function that calculates the area of a rectangle
double RectangleArea(double length, double width) {
    return length * width;
}

// Function that calculates the area of a square
double SquareArea(double side) {
    return pow(side, 2);
}










