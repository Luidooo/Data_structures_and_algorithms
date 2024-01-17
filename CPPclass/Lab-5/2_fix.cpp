#include <iostream>
using namespace std;

int main(){

    cout << "Quantos quilometros voce dirigiu? ";
    float kms; cin >> kms;
    cout << "Quantos litros voce gastou? ";
    float lts; cin >> lts;
    cout << endl << "Distancia percorrida: " << kms << endl
         << "Litros de combustivel: " << lts << endl
         << "O consumo do seu carro foi " << kms/lts << " km/litro" << endl;

    return 0;
}
