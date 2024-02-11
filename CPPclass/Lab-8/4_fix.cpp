#include <iostream>
using namespace std;

int main(){

    cout << "Aposta dos amigos" << endl
         << "-----------------" << endl
         << "Digite a quantia do apostador 1: ";
    float p1; cin >> p1;
    cout << "Digite a quantia do apostador 2: ";
    float p2; cin >> p2;
    cout << "Digite a quantia do premio: ";
    int premio; cin >> premio;


    cout << "o p1 tem direito a R$" << (premio/(p1+p2))*p1 << endl
         << "o p2 tem direito a R$" << (premio/(p1+p2))*p2 << endl;

    return 0;
}
