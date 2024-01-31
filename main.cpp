#include "circle.hpp"
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    Circle obj1;
    Circle obj2(1,2,5);
    
    Circle* p1 = &obj1;
    Circle* p2 = &obj2;
    
    Circle* p3 = new Circle[2];
    
    p3[0] = Circle();
    p3[1] = Circle(2,1,5);
    (*p1).set(3, 7, 4.2);
    p3[0].set(3, 3, 4);
    
    
    cout << "Circle 1 was created with the default constructor. Here is the data:" << endl;
    obj1.print();
    cout <<"Area: "<< obj1.area() << endl;
    cout <<"Perimeter: "<< obj1.perimeter() << endl;
    cout <<"Distance between the center of Circle 1 and the origin is: " << obj1.distance() << endl;
   
    cout << "Circle 2 was created with the constructor initializer. Here is the data:" << endl;
    obj2.print();
    cout <<"Area: "<< obj2.area() << endl;
    cout <<"Perimeter: "<< obj2.perimeter() << endl;
    cout <<"Distance between the center of Circle 2 and the origin is: " << obj2.distance() << endl;
    
    cout << "Circle 3 was created with the default constructor. Here is the data:" << endl;
    p3[0].print();
    cout <<"Area: "<< p3[0].area() << endl;
    cout <<"Perimeter: "<< p3[0].perimeter() << endl;
    cout <<"Distance between the center of Circle 3 and the origin is: " << p3[0].distance() << endl;
    
    cout << "Circle 4 was created with the constructor initializer. Here is the data:" << endl;
    p3[1].print();
    cout <<"Area: "<< p3[1].area() << endl;
    cout <<"Perimeter: "<< p3[1].perimeter() << endl;
    cout <<"Distance between the center of Circle 4 and the origin is: " << p3[1].distance() << endl << endl;
    
    cout << "Distance from the center of Circle 1 to the center of Circle 2 is: " << obj1.distance(obj2) << endl;
    cout << "Distance from the center of Circle 3 to the center of Circle 4 is: " << p3[0].distance(p3[1]) << endl;
}

}

