#include<iostream>
#include <cmath>

using namespace std;

int main(){

        double a;
        cout << "Input a Number = ";
        cin >> a;

    try{
        throw 8;

    }catch(int i){

        if ( floor(a) == ceil(a) ){
             cout<< "Expected Double Number. Line no "  << i << endl;
        }

        if ( floor(a) != ceil(a) ){
             cout<< "Expected Integer Number. Line no "  << i << endl;
        }

    }

    return 0;

}
