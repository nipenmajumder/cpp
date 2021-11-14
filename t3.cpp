#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;

template<class x> void min(x &a,x &b){
    if(a>b){
        cout<<b<<"\n";
    }else{
          cout<<a<<"\n";
    }
}

int main ()
{
    int a=3,b=4;
    char ab='a',ac='b';
	min(a,b);
	min(ab,ac);

	return 0;
}
