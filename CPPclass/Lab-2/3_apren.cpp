#include <iostream>
using namespace std;

int main(){
    cout << "Digite seu peso em quilos" << endl;
    int peso; cin >> peso;

    cout << "Digite seu tempo de corrida" << endl;
    char horas; float corrida, min;
    cin >> corrida >> horas >> min;
    corrida += min/60;
    cout << "Digite seu tempo de ciclismo" << endl;
    float ciclismo;
    cin >> ciclismo >> horas >> min;
    ciclismo += min/60;
    cout << "Digite seu tempo de natacao" << endl;
    float natacao;
    cin >> natacao >> horas >> min;
    natacao += min/60;

    float calorias = (natacao * 8 * peso) + ((corrida+ciclismo) * 7 * peso);
    cout << calorias << endl;

    return 0;
}
