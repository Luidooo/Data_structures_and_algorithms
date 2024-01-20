#include <iostream>
using namespace std;

int bitsAltos(int x){
    x = x >> 16;
    cout << x << endl;
    return x;
}

int main(){

    cout << "Digite um int: ";
    int x; cin >> x;
    bitsAltos(x);
    return 0;
}
