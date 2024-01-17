#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cout << "Hora de partida (HH:MM)";
    float h_p, min_p;char x;
    cin >> h_p >> x >> min_p;
    cout << "Hora de chegada (HH:MM)";
    float h_c, min_c;
    cin >> h_c >> x >> min_c;
    int min = min_c - min_p;
    int horas = h_c - h_p;
    horas = min<=0?horas-1:horas;
    cout << endl << "Tempo total de viagem: " << horas << ":" << abs(min) <<endl;
    return 0;
}
