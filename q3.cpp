#include <iostream>
using namespace std;

class Shape
{
protected:
    double width, height;
public:
    // Define constructor
    Shape(double newWidth, double newHeight):
        width{newWidth}, height{newHeight} {}
    // Define getters
    double getWidth() const
    {
        return width;
    }
    double getHeight() const
    {
        return height;
    }
};

class Rectangle: public Shape
{
public:
    double area()
    {
        return (width*height);
    }
};

class Triangle: public Shape
{
public:
    double area()
    {
        return (width*height)/2;
    }
};

int main ()
{
    Rectangle rect(5.0,3.0);
    Triangle tri(2.0,5.0);
    cout << rect.area() << endl;
    cout << tri.area() << endl;
    return 0;
}
