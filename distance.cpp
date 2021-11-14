#include <iostream>
using namespace std;

class dist
{
public:
    double distance = 500;
    virtual void trav_time(int speed=60)
    {
        cout<< "time in Miles" << distance/speed <<endl;
    }
};



class metric: public dist
{
public:
    //double distance = 500;
    void trav_time(int speed=100)
    {
        cout<< "time in Kilometer" << distance/speed<<endl;
    }
};

int main()
{
    metric myObj;
    dist obj;
    myObj.trav_time();
    obj.trav_time();
    return 0;
}
