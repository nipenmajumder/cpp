#include<iostream>
using namespace std;

class A
{
public:
    int a=5,b=5;
    int calculate()
    {
        return (a+b);
    }
};
class B:public A
{
    int a=10,b=7;
public:
    int calculate()
    {
        return (a-b);
    }
};
int main()
{

    B obj;

    cout<<obj.calculate()<<endl;
    return 0;
}
