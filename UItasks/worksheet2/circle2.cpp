#include <stdexcept>
#include "circle2.hpp"

using namespace std;

Circle::Circle(double x, double y, double r):
  Shape(x, y), radius(r)  // <1>
{
  if (radius <= 0.0) {
    throw std::invalid_argument("radius must be > 0");
  }
}

bool Circle::containsPoint(double x, double y) const
{
  double dx = x - getX();  // <2>
  double dy = y - getY();  // <2>
  return sqrt(dx*dx + dy*dy) <= radius;
}

void Circle::draw() const
{
     cout << "Drawing Circle("
       << "x=" << getX()
       << ",y=" << getY()
       << ",r=" << getRadius()
       << ")" << endl;
}