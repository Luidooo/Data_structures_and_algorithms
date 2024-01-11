#include <iostream>
using namespace std;

float harmonic(float num1, float num2){
    if(num1 == 0 || num2 == 0)
        return 0;

    return 2 / ((1/abs(num1)) + 1/abs(num2));
}

int main(){

    cout << "Digite um numero" << endl;
    float num_1;cin >> num_1;
    cout << "Digite um numero" << endl;
    float num_2;cin >> num_2;

    cout << "A media harmonica entre esses numero e " << harmonic(num_1, num_2) << endl;

    return 0;
}
