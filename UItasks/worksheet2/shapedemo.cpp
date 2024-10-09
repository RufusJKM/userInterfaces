#include <iostream>
#include "rect.hpp"
#include "circle2.hpp"
#include <vector>
using namespace std;

int main(){
    vector<Shape*> shapes;
    shapes.push_back(new Rectangle(5, 8));
    shapes.push_back(new Rectangle(2, 4, -3, 7));
    shapes.push_back(new Circle(5, 8, 16));
    shapes.push_back(new Circle(25));
    
    for (Shape* s: shapes) {
        s->draw();
    }
}

