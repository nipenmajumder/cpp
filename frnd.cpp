#include<iostream>
using namespace std;
int x;
class myclass
{
public:

    int neg(int num)
    {
        return num =-num;
    }
};

int main()
{
    myclass obj;
    cout<<obj.neg(10);


    return 0;
}
