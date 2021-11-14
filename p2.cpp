#include<iostream>

using namespace std;

template<class base> void isEqualTo(base &x, base &y)
{

    if(x == y)
    {
        cout<< "True" << endl;
    }
    else
    {
        cout<< "False" << endl;
    }
}

int main()
{

    int a = 21, b = 20;
    float c = 20.30, d =20.40;

    isEqualTo(a, b);
    isEqualTo(c, d);

    return 0;


}
