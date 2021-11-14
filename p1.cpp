#include <iostream>
using namespace std;

class Algorithm {
    template <class T>max(T &x, T &y) {
        return x > y ? x : y;
    };
};
int main()
{
    cout << max(2,3);
}
