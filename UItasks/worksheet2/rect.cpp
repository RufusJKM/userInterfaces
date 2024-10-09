#include <stdexcept>
#include "rect.hpp"

using namespace std;
Rectangle::Rectangle(double newWidth, double newHeight, double newX, double newY):
    width(newWidth), height(newHeight), Shape(newX, newY)
{
    if (height <=0 || width <= 0){
        throw invalid_argument("Dimensions must be > 0");
    }
}

void Rectangle::draw() const
{
     cout << "Drawing Rectangle("
       << "x=" << getX()
       << ",y=" << getY()
       << ")" << endl;
}