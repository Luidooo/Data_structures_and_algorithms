#include <iostream>
using namespace std;

unsigned char codifica(unsigned char num){
    return num + 3;
}

unsigned char decodifica(unsigned char num){
    return num - 3;
}

int main(){

    cout << "Digite um char: ";
    unsigned char num; cin >> num;
    cout << " Se deseja codificar, digite 1 se nao, digite 0 " << endl;
    bool x; cin >> x;
    if(x == true)
    cout << (codifica(num)) << " codificado" << endl;
    else
    cout << (decodifica(num)) << " decodificado" << endl;
    return 0;
}
