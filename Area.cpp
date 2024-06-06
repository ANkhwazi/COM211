#include "Area.hpp"

float Area::calculateArea(const shapes::Square& square) {
    return square.getSide() * square.getSide();
}

float Area::calculateArea(const shapes::Triangle& triangle) {
    return 0.5f * triangle.getBase() * triangle.getHeight();
}

float Area::calculateArea(const shapes::Circle& circle) {
    return 3.14159f * circle.getRadius() * circle.getRadius();
}
