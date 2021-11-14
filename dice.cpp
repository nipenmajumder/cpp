#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class dice
{
    int n;
public:
    int roll()
    {
        srand(time(0));
        n = rand()%6+1;
       return n;
    }
};

int main()
{

    dice obj;
    cout << obj.roll() <<endl;

    return 0;
}
