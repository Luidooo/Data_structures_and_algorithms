#include <iostream>
#include <climits>
using namespace std;

void isShort(short a){
    if(a<SHRT_MAX) cout << a << "cabe em um short" << endl;
    else cout << a << "nao cabe em um short" << endl;
}

void isInt(int a){
    if(a<INT_MAX) cout << a << "cabe em um int" << endl;
    else cout << a << "nao cabe em um int" << endl;
}
int main(){
    cout << "digite um numero ";
    int a;cin >> a;
    isShort(a);
    isInt(a);
    return 0;
}
