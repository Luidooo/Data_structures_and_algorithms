#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

float cilindrolas(float raio, float altura){
    return M_PI*(pow(raio,raio))*altura;
}

int main(){

    float raio; cin >> raio;
    float altura; cin >> altura;

    cout << " O volume do cilindro eh " << cilindrolas(raio, altura) << endl;


    return 0;
}
