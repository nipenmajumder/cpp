#include<iostream>
using namespace std;

class box{
   public:
    double height, width, lengh;

    box(double h, double w, double l){
        double  height = h;
        double  width = w;
        double  lengh = l;
    }
    int vol(double height, double width,double lengh){
        double result =  height * width * lengh;
        return result;
    }
};

int main(){

    box obj(5.4,5.4,5.4);
    cout<<obj.vol(5.4,5.4,5.4);

    return 0;
}
