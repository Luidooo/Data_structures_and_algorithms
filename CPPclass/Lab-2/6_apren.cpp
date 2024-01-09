#include <iostream>
using namespace std;

int main(){

    cout << "Digite o Lado A, Lado B e a Altura do Prisma" << endl;

    int ladoA,ladoB,base,altura,volume;
    cin >> ladoA >> ladoB >> altura;

    base = ladoA * ladoB;
    volume=base*altura;

    cout << "Lado A " << ladoA << endl
         << "Lado B " << ladoB << endl
         << "Area da base " << base << endl
         << "Altura " << altura << endl
         << "Volume do prisma " << volume << endl;


    return 0;
}
