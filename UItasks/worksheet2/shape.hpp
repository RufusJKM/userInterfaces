#pragma once
#include <iostream>
class Shape
{
  public:
    Shape(double x, double y): xorigin(x), yorigin(y) {}
    double getX() const { return xorigin; }
    double getY() const { return yorigin; }
    virtual void draw() const = 0;

  private:
    double xorigin;
    double yorigin;
};
