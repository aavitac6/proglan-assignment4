#ifndef __POINT2D_HPP__
#define __POINT2D_HPP__

namespace Solution{
    class Point2D{
    private:
        float _x, _y, _z;

    public:
        Point2D();
        Point2D(float x, float y, float z);

        float GetX() const;
        float GetY() const;
        float GetZ() const;

        void SetX(float x);
        void SetY(float y);
        void SetZ(float z);

        Point2D operator+(const Point2D inp);
        Point2D operator-(const Point2D inp);
        Point2D operator*(const Point2D inp);

        float distanceTo(const Point2D& other) const;
    };
}


#endif 
