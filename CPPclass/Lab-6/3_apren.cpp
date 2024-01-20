#include <iostream>
using namespace std;

int bitBaixo(){

    int a=350000;a= a << 16;
    cout << a << endl;
    a = a >> 16;
    cout << a << endl;
    return 1;
}

int main(){
    bitBaixo();
}
