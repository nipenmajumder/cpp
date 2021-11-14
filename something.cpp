#include<iostream>
using namespace std;

class something
{
    int a,b;
public:
    int set_val(int i,int j){
        a=i;
        b=j;
        return 0;
    }
    friend int func(something obj);
};

int func(something obj){
    int result = obj.a+obj.b;
    return result;
};

int main()
{
    something obj;
    cout<<obj.set_val(4,6);
    cout<<func(obj);
    return 0;
}
