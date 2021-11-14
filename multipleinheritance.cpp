#include <iostream>
using namespace std;

class base {
    public:
    int num, num2;
    public:
    base(int x, int y){
        num = x;
        num2 = y;
    }

};

class d_one: public base{


    int sum(int num,int num2){
        int total = 0;
        total = num + num2;

        return total;
    }

};

class d_two: public base {

   int substract(int num, int num2){
        int sub_res = 0;
        sub_res = num - num2;

        return sub_res;
    }

};

class result: public d_one, public d_two{
    d_one obj_one;
    obj_one.sum();

    d_two obj_two;
  obj_two.substract();
};

int main(){
    base obj(int 10, int 2);

    return 0;

}
