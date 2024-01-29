#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cout << "Digite um ponto flutuante: ";
    float number; cin >> number;
    cout << "Notacao padrao: "<< int(ceil(number)) << endl;
    cout.setf(ios::scientific);
    cout << "Notacao cietifica: " << number<< endl;
    //cout.setf(ios::dec);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Notacao decimal: " << number << endl;

    return 0;
}
