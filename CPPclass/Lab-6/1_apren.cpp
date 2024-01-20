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
    cout << int(num) << " Normal" << endl;
    cout << int(codifica(num)) << " codificado" << endl;
    cout << int(decodifica(num)) << " decodificado" << endl;
    return 0;
}
