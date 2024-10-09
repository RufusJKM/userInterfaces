#pragma once

#include "shape.hpp"
class Rectangle: public Shape
{
    public:
        Rectangle(double newWidth, double newHeight): Rectangle(newWidth, newHeight, 0, 0) {}
        Rectangle(double, double, double, double);
        double getX() const { return x; } 
        double getY() const { return y; }
        double getHeight() const { return height; }
        double getWidth() const { return width; }
        double perimeter() const { return (width*2 + height*2); }
        double area() const { return width*height; }
        virtual void draw() const;

    private:
        double width, height, x, y;
};