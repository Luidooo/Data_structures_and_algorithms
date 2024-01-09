#include <iostream>
using namespace std;

int main(){

    cout << "Digite um numero" << endl;
    int num; cin >> num;

    for(int i=1; i < 11;i++){
        int valor = num * i;
        cout << num << " X " << i << " = " << valor << endl;
    }

    return 0;
}
