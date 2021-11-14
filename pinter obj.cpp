#include <iostream>

using namespace std;

class point{
   int x,y;
   public:
   point(int n,int m){x=n;y=m;}
   int res(){return x+y;}
};
int main()
{
   point ob[3]={
       point(6,6),point(5,1),point(4,9)
   };
   int i;
   point *k;
   k=ob;
   for(i=0;i<3;i++){
       cout<<k->res()<<endl;
        k++;
   }
   cout<<"\n";
   return 0;
}

