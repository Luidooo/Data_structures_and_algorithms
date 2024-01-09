#include <iostream>
using namespace std;

int main(){

    int horas, minutos; char n;
    cout << "Que horas sao?" << endl;
    cin >> horas >> n >> minutos;
    cout << "Seu relogio esta atrasado, sao " << horas+1 << ":" << minutos << endl;
    return 0;
}
