#include <iostream>

using namespace std;

class prompt{

    int count;
    public:
    int n;
    string str;

    public:

    prompt(string strprint){
        str = strprint;
        cout << str <<endl;
        cin >> count;
        n = count;
    }
    ~prompt(){
        str = "";
    }

};

int main(){
    int i;
    prompt obj("Nipen");

     for(i = 0; i<obj.n; i++){
        cout << "Done" <<endl;
    }

    return 0;
}
