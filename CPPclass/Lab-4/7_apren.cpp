#include <iostream>
using namespace std;

float segunda(float a){
    return a*a;
}

float terceira(float a){
    return (segunda(a)*a);
}

float terceira_segunda(float a){
    return (terceira(a)*terceira(a));
}

int main(){

    cout << "Digite um valor:";
    float a; cin >> a;
    cout << "quadrado " << segunda(a) << endl
         << "cubo = " << terceira(a) << endl
         << "cubo ao quadrado = " << terceira_segunda(a) << endl;
    return 0;
}
