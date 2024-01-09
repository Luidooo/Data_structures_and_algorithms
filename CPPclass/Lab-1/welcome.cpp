#include <iostream>
using namespace std;

void just_endl(){
    cout << "Bem vindo" << endl << "ao" << endl << "mundo do cpp" << endl;
}

void just_n(){
    cout << "Bem vindo\nao mundo\ndo C++\n" << endl;
}

int main(){

    cout << "Digite 1 para a solucao com endl e 2 para a solucao com \\n" << endl;
    int a;cin >> a;

    if(a == 1)
        just_endl();
    else
        just_n();
    return 0;
}
