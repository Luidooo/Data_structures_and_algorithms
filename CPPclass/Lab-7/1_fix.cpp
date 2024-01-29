#include <iostream>
using namespace std;

float imc(float altura, float massa){
    float imc = massa/altura*altura;
    return imc;
}


double imc(double altura, double massa){
    double imc = massa/altura*altura;
    return imc;
}

int main(){

    cout.setf(ios_base::fixed, ios_base::floatfield);
    //cout << "Digite sua altura em metreos:";

    float altura_f = 1.75;
    //cin >> altura_f;
    double altura_d = 1.75;
    //cin >> altura_d;

    //cout <<  "Digite sua massa corporal em quilos:";

    float massa_f = 80.0f;
    //cin >> massa_f;
    double massa_d = 80.0;
   // cin >> massa_d;

    /*
    cout << "Seu indice de massa corporal(imc):" << endl
        << "em float " << imc(altura_f,massa_f) << endl
        << "em double " << imc(altura_d,massa_d) << endl;
    */

    cout << imc(1.75f, 80.0f) << endl;
    cout << imc(1.75,80.0) << endl;

    return 0;
}
