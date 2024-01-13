#include <iostream>
using namespace std;

int aumenta(int x){
    return x * 1.15;
}

int main(){

    cout << "Digite seu salario " << endl;
    int salario;cin >> salario;
    cout << "Seu salario era " << salario << " Mas agora eh " << aumenta(salario) << endl;
    return 0;
}
