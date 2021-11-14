#include <iostream>

using namespace std;

class refference{
    int i;
    public:
    refference(int n){
        i=n;
        cout<<"constructing && setting memory address"<< i<<endl;
    }
    ~refference(){cout<<"destructing && deleting memory address"<<i<<endl;}
    int reff(){return i;}
};
void show(refference obj)
{
    cout<<"received Refference"<<obj.reff()<<endl;
}

int main()
{
    refference ob(23);
    show(ob);
    return 0;
}
