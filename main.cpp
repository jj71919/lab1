#include "circle.hpp"
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    Circle obj1;
    Circle obj2(1,2,5);
    
    Circle* p1 = &obj1;
    Circle* p2 = &obj2;
    
    Circle* p3 = new Circle[2];
    
    p3[0] = obj1;
    p3[1] = obj2;
    (*p1).set(3, 7, 4.2);
    (*p2).set(2, 4, 3.4);
    p3[0].set(3, 3, 4);
    p3[1].set(10, 10, 6);
    
    obj1.print();
    cout <<"Circle 1 area: "<< obj1.area() << endl;
    cout <<"Circle 2 perimeter: "<< obj2.perimeter() << endl;
    cout << "Distance between Circle 1 and origin is: " << p3[0].distance() << endl;
    obj2.print();
    cout << "Distance between Circle 1 and Circle 2 is: " << p3[0].distance(p3[1]) << endl;
    
    p3[0].print();
    cout <<"Circle 1 area: "<< obj1.area() << endl;
    cout <<"Circle 2 perimeter: "<< obj2.perimeter() << endl;
    cout << "Distance between Circle p3[0] and origin is: " << p3[0].distance() << endl;
    p3[1].print();
    cout << "Distance between Circle p3[0] and Circle p3[1] is: " << p3[0].distance(p3[1]) << endl;
    
    
}

