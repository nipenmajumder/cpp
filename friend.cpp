#include<iostream>>
using namespace std;
class myclass{
    int x,y;
    public:
    myclass(int i,int j){x=i;y=j;}
    friend print(myclass obj);
};


 print (myclass obj)
{
    cout<<obj.x<<endl;
    cout<<obj.y<<endl;
}
int main()
{
    myclass obj(6,7);
    print(obj);
    return 0;
}
