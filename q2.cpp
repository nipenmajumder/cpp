#include<iostream>
using namespace std;

class Shape{
    protected:
        float width, height;
    public:
         Shape (float a, float b)
        {
            width = a;
            height = b;
        }
};

class Rectangle: public Shape{

    public:
        float area ()
        {
            return (width * height);
        }
    };

class Triangle: public Shape
{
public:
	float area ()
	{
		return (width * height / 2);
	}
};

int main (){

    Shape obj(4,5);

	Rectangle rectnagle();
	Triangle triangle;

	cout << "Rectangle area is = " << rectnagle.area() << endl;
	cout << "Triangle area is = " << triangle.area() << endl;
	return 0;
}
