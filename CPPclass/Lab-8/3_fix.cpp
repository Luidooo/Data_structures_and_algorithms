#include <iostream>
using namespace std;

int main(){

    const int segundos_segs = 60;
    const int segundos_min = 60*60;
    const int segundos_hora = (60*60)*24;
    const int segundos_dia = ((60*60)*24)*31*12;


    cout << "Digite um numero de segundos: ";
    int num; cin >> num;
    int segs = num%segundos_segs;
    int min = (num%segundos_min)/60;
    int hora = (num%segundos_hora/(60*60));
    int dia = (num%segundos_dia/86400);

    cout << num << " segundos = " << dia << " dias," << hora << " horas,"
         << min << " minuots e " << segs << " segundos." << endl;

    return 0;
}
