#include <iostream>
using namespace std;

class Sum
{
public:
    int x=2;
    int y=3;
    void summation()
    {
        cout<<"Sum = "<<x+y<<endl;
    }

};

class Multipicaiton:
{
public:
    int x=2;
    int y=3;
    void multipicaiton()
    {
        cout << " Multiplication = " <<x*y << endl;
    }
};

class derived:public Sum,public Multipicaiton,
{
public:
    int x=2;
    int y=3;
    void division()
    {
        cout <<  "Division = "<< x / y << endl;
    }
};

int main ()
{
    derived obj;
    obj.division();
    obj.summation();
    obj.multipicaiton();

}




