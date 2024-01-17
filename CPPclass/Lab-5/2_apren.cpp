#include <iostream>
using namespace std;

#define pao 0.30
#define pastel 0.25

int main(){

    cout << "Quantos paes deseja? ";
    int x;cin >> x;
    cout << "Quantos pasteis deseja? ";
    int y;cin >> y;
    float total = (x*pao) + (y*pastel);
    cout << "Total da compra: " << total << endl;
    return 0;
}
