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

	Rectangle rect();
	Triangle tri;

	cout << "Rectangle area is = " << rect.area() << endl;
	cout << "Triangle area is = " << tri.area() << endl;
	return 0;
}

