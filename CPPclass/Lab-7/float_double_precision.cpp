#include <iostream>
using namespace std;

// a funcao setf() fixa o numero de casa decimais mostrados apos a virgula
//float = ate o sexto digito significativo possui precisao
//double = ate o decimo quinto digito significativo possui precisao

int main(){
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float fltvar = 10.0 / 3.0;
    double dbvar = 10.0 / 3.0;
    float milhao = 1.0e6;

    cout << "fltvar: " << fltvar << endl;
    cout << "fltvar vezes um milhao: " << milhao * fltvar << endl;
    cout << "dbvar: " <<  dbvar<< endl;
    cout << "dbvar vezes um milhao: " <<  milhao * dbvar<< endl;
}
