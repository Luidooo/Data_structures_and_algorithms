#include <iostream>
using namespace std;

void Qhoras(int horas, int minutos){

   cout << "Agora sao " << horas << ":" << minutos << endl;
}

int main(){

   cout << "Digite as horas " << endl;
   cout << "Digite os minutos " << endl;
   int horas, minutos;
   cin >> horas >> minutos;
   Qhoras(horas,minutos);
    return 0;
}
