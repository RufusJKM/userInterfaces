#include <iostream>
#include "rect.hpp"

using namespace std;

int main(){
    try{
        Rectangle a(5, 3);
        cout << "A perimeter = " << a.perimeter() << " A area = " << a.area() << endl;
   } catch(invalid_argument e){
        cout << ("Invalid dimensions supplied");
        exit(1);
    }
    
    try{
        Rectangle b(7, 3, 2, -5);
        cout << "B perimeter = " << b.perimeter() << " B area = " << b.area() << endl;
    } catch(invalid_argument e){
        cout << ("Invalid dimensions supplied");
        exit(1);
    }
     
     try{
        Rectangle c(-3, 4);
        cout << "C perimeter = " << c.perimeter() << " C area = " << c.area() << endl;
  } catch(invalid_argument e){
        cout << ("Invalid dimensions supplied");
        exit(1);
    }
    
}