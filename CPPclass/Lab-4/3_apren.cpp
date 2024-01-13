#include <iostream>
#include <cmath>
using namespace std;

void imc(float altura, float peso){

    cout << " Indide de Massa corporal" << endl
         << "-------------------------" << endl
         << " Altura: " << altura << endl
         << " peso: " << peso << endl
         << " Imc: " << peso/pow(altura,altura) << endl << endl;
}

int main(){
    cout << "Digite sua altura " << endl;
    float altura;cin >> altura;
    cout << "Digite seu peso " << endl;
    float peso;cin >> peso;
    imc(altura,peso);
    return 0;
}
