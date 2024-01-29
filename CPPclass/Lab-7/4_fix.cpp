#include <iostream>
using namespace std;

int main(){

    long double agua = 3e-23;
    long double galon = 950;
    cout << "Digite a quantidade de water in galons: ";
    long double water; cin >> water;
    water *= galon;
    water /= agua;
    //cout.setf(ios::scientific);
    cout << "Existem " << water << " moleculas de agua" << endl;
    return 0;
}
