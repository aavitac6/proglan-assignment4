#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangles.hpp"

using namespace std;
using namespace Solution;

int main(int argc, char ** argv)
{
    int N;
    if (!(cin >> N)) return 0;
    
    vector<Triangle> triangles;

    /*--------------------------
    Buat loop untuk membuat menginputkan data triangle (3 buah X Y Z data) ke dalam
    variable triangles
    --------------------------*/
    for (int i = 0; i < N; i++) {
        float x, y, z;
        Point2D p[3];
        
        for (int j = 0; j < 3; j++) {
            cin >> x >> y >> z;
            p[j] = Point2D(x, y, z);
        }
        triangles.push_back(Triangle(p[0], p[1], p[2]));
    }
    /*------------------------*/


    /*--------------------------
    Implementasikan kode untuk melakukan pengecekan apakah data pada variable triangles
    adalah "sama kaki", "sama sisi", "siku-siku", atau "sembarang"
    --------------------------*/
    for (int i = 0; i < triangles.size(); i++) {
        triangles[i].TriangleType();
    }

    /*------------------------*/

    return 0;
}