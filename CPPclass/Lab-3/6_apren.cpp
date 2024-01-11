#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ligar(){
    cout << "Ligando" << endl;
}

void integridade(){
    cout << "Verificando integridade" << endl;
}

void processos(){
    cout << "ativando processos" << endl;
}

int srand_mod(){
    int g_seed = time(NULL);
    g_seed = g_seed * 1103515245 + 12345;
    return (g_seed / 65536) % RAND_MAX;
}

int iniar(){
    ligar();
    integridade();
    processos();

    return srand_mod();
}

int main(){

    int a = iniar();
    a>16384?cout << "Sistema funcionando": cout << "Erro";
    cout << endl;
    return 0;
}

