#include <iostream>
#include <math.h>

#include "include/point2d.hpp"

namespace Solution{
    Point2D::Point2D() : _x(0), _y(0), _z(0) { }

    Point2D::Point2D(float x, float y, float z) : _x(x), _y(y), _z(z) { }

    float Point2D::GetX() const { return _x; }
    float Point2D::GetY() const { return _y; }
    float Point2D::GetZ() const { return _z; }

    void Point2D::SetX(float x) { _x = x; }
    void Point2D::SetY(float y) { _y = y; }
    void Point2D::SetZ(float z) { _z = z; }

    Point2D Point2D::operator+(const Point2D inp){
        return Point2D(_x + inp._x, _y + inp._y, _z + inp._z);
    }

    Point2D Point2D::operator-(const Point2D inp) {
        return Point2D(_x - inp._x, _y - inp._y, _z - inp._z);
    }

    Point2D Point2D::operator*(const Point2D inp) {
    return Point2D(_x * inp._x, _y * inp._y, _z * inp._z);
    }

    float Point2D::distanceTo(const Point2D& other) const{
        float dx = other._x - _x;
        float dy = other._y - _y;
        float dz = other._z - _z;
        
        return sqrt(dx*dx + dy*dy + dz*dz);
    }
}

