#include "circle.hpp"
#include <iostream>
using namespace std;

const double PI = 3.1415926535898;


Circle::Circle() : x(0), y(0), rad(0) {}

Circle::Circle(int newX, int newY, double newR) : x(newX), y(newY), rad(newR) {}


void Circle::set(int xx, int yy, double rr) {
    this->x = xx;
    this->y = yy;
    this->rad = rr;
}


double Circle::area() {
    return PI * pow(this->rad, 2);
}

double Circle::perimeter() {
    return 2 * PI * this->rad;
}

double Circle::distance() {
    return sqrt(pow(this->x, 2) + pow(this->y, 2));
}

double Circle::distance(const Circle& obj) {
    return sqrt(pow(this->x-obj.getX(), 2) + pow(this->y-obj.getY(), 2));
}

void Circle::print() {
    cout << "X: " << this->x << endl;
    cout << "Y: " << this->y << endl;
    cout << "Radius: " << this->rad << endl;
}

