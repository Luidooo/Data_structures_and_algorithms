#include <iostream>
using namespace std;

int main(){

    cout << "Quantos anos voce fuma?" << endl
         << "Quantos cigarros fuma por dia?" << endl
         << "Qual  preco de uma carteira de cigarros?" << endl;

    int total, anos, cigs; float valor;
    cin >> anos >> cigs >> valor;

    total = anos*365*cigs/(valor/20);

    cout << total << endl;

    return 0;
}
