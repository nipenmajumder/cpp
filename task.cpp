#include <iostream>

using namespace std;

class num{
    public:
    int i;

    public:
    num(int x){
        i = x;
    }

    virtual void shownum(int i){
        cout<< "Number is = " << i;
    }
};

class outhex: public num{
    public:
     outhex(int x):num(x){}

    void shownum(){
        cout<< "Hexadecimal Number is = " << i <<endl;
    }
};
class outbi: public num{
    public:
     outbi(int x):num(x){}

    void shownum(){
        cout<< "Binary Number is = " << i <<endl;
    }
};

int main()
{
    outbi obj(23);
    outhex ong(22);
    obj.shownum();
    ong.shownum();
    return 0;
}
