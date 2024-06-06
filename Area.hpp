#pragma once

#include "Square.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"

class Area {
public:
    static float calculateArea(const shapes::Square& square);
    static float calculateArea(const shapes::Triangle& triangle);
    static float calculateArea(const shapes::Circle& circle);
};
