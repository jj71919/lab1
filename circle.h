//
//  circle.hpp
//  Circle
//
//  Created by Joseph LaBarbera on 1/31/24.
//

#ifndef circle_hpp
#define circle_hpp

#include <stdio.h>

#endif /* circle_hpp */
class Circle{
public:
    Circle();
    
    Circle(int newX, int newY, double newR){
        x = newX;
        y = newY;
        radius = newR;
    }
    // 3 Getters
    
    int getX() const;
    int getY() const;
    double getradius() const;
    // 1 Setter
    void setCircle(int tempX,int tempY, double r);
    
    //Area and perimeter
    double area();
    double perimeter();
    
    //Distance
    double distance(const Circle &c);
    double distance();
    
    //Print
    void print();
    
    
private:
    int x;
    int y;
    double radius;
    
};

