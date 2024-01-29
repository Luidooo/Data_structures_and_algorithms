#include <iostream>
using namespace std;

int main(){

    long double segs = 3.125e+7;
    cout << "Digite sua idade em anos: ";
    int anos; cin >> anos;
    segs *= anos;
    cout << anos << " anos correspondem a " << segs << " segundos." << endl;

    return 0;
}
