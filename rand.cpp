#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class dice{
    int randNum;
    public:
    int roll(){
        srand(time(0));
        randNum = rand()%6+1;
        return randNum;
    }
};

int main(){

    dice obj;
    cout << obj.roll() <<endl;
    return 0;
}
