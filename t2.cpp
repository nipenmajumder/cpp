#include <iostream>

using namespace std;

class A
{

    int x=5;

public:

    void display()

    {
        cout << "Value of x is : " << x<<endl;
    }


};

class B: public A
{


    int y = 10;

public:


    void display()
    {
        cout << "Value of y is : " <<y<< endl;
    }

};

int main()
{
   B obj;
   obj.display();
   return 0;
}
