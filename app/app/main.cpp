//  Write a program for finnding intersecting 3d triangles
//  The number of triangles <= 1e6
//
//  main.cpp
//  app
//
//  Created by Alexander Popelnyk on 31.01.23.
//

#include <iostream>
#include <utility>


class Point3D {
public:
    Point3D() = delete;
    Point3D(int x, int y, int z): x_(x), y_(y), z_(z) { };
private:
    int x_, y_, z_;
};


// Line is presented as Ax+By+C=0
class Line2D {
public:
    Line2D() = delete;
private:
    
};

class Line3D {
    
};

// Must be described as planes (3 planes in space)
// class Triangle3D { }


int main(int argc, const char * argv[]) {
    std::cout << "here we go\n";
    
    return 0;
}
