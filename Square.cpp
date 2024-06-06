#include "Square.hpp"

namespace shapes {

Square::Square() : side(0) {}

Square::Square(float s) : side(s) {}

Square::~Square() {}

void Square::setSide(float s) {
    side = s;
}

float Square::getSide() const {
    return side;
}

}
