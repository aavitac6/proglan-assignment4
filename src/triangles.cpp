/* 
Anda diminta untuk mengimplementasikan class dengan nama Triangle 
yang didalamnya memuat 3 data dalam class Point2D yang telah diimplementasikan

Tujuan dari program adalah menentukan apakah suatua Triangle adalah 
sama kaki, sama sisi, siku-siku, dan sembarang

Input:
    vector dari suatu Triangle (dengan banyak sebesar 3*N) --> N = total Triangle

Output
    print setiap line dengan "sama kaki", "sama sisi", "siku-siku", atau "sembarang"


Silahkan gunakan teori dan implementasi yang telah diajarkan dikelas
*/
#include "include/triangles.hpp"
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

namespace Solution {
    Triangle::Triangle() {}
    Triangle::Triangle(Point2D t1, Point2D t2, Point2D t3) : _t1(t1), _t2(t2), _t3(t3) {}

    void Triangle::TriangleType() {
        float a = _t1.distanceTo(_t2);
        float b = _t2.distanceTo(_t3);
        float c = _t3.distanceTo(_t1);

        std::vector<float> sides = {a, b, c};
        std::sort(sides.begin(), sides.end());


        bool isRight = abs((sides[0]*sides[0] + sides[1]*sides[1]) - (sides[2]*sides[2])) < 0.01;

        if (abs(a - b) < 0.01 && abs(b - c) < 0.01) {
            std::cout << "sama sisi" << std::endl;
        } else if (isRight) {
            std::cout << "siku-siku" << std::endl;
        } else if (abs(a - b) < 0.01 || abs(b - c) < 0.01 || abs(a - c) < 0.01) {
            std::cout << "sama kaki" << std::endl;
        } else {
            std::cout << "sembarang" << std::endl;
        }
    }
}