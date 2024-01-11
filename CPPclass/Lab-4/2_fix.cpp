#include <iostream>
using namespace std;

float converter(float celsius){
    return (celsius * 9/5) + 32;
}

int main(){

    cout << "Digite uma temperatura em celsius" << endl;
    float celsius; cin >> celsius;
    cout << celsius << " graus equivalem a "
         << converter(celsius) << " em graus fahrenheit" << endl;
    return 0;
}
