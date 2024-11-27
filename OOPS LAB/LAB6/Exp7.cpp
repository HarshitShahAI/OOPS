#include<iostream>
#include<new>
using namespace std;

class Cube;

class Cuboid
{
    int length;
    int width;
    int height;
    public:
    Cuboid(int length,int width,int height)
    {
        cout << "Cuboid Parameterized Constructor" << endl;
        this->length=length;
        this->width=width;
        this->height=height;
    }
    void find_TotalSurfaceArea()
    {
        cout << "Total Surface Area: " << (2*(length*width+width*height+height*length)) << endl;
    }
    friend  class Cube;
    ~Cuboid()
    {
        cout << "Cuboid Destructor" << endl;
    }
};

class Cube
{
    int side;
    public:
    Cube()
    {
        cout << "Cube Constructor" << endl;
    }
    void cuboidtoCube(Cuboid &cuboid)
    {
        side=cuboid.length;
    }
    void find_SurfaceArea()
    {
        cout << "Surface Area: " << (6*side*side) << endl;
    }
    ~Cube()
    {
        cout << "Cube Destructor" << endl;
    }
};

int main()
{
    Cuboid cuboid1(2,3,4);
    cuboid1.find_TotalSurfaceArea();
    Cube cube1;
    cube1.cuboidtoCube(cuboid1);
    cube1.find_SurfaceArea();
    return 0;
}