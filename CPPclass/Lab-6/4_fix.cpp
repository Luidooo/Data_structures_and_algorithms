#include <iostream>
using namespace std;

unsigned char ligaBit(unsigned char num, int x){
   unsigned char a = 1; a = a << x;
   num = num | a;
   return num;

}

int desligaBit(unsigned char num,int x){
   unsigned char a = 1; a = ~(a << x);
   num = num & a;
   return num;

}

bool testaBit(unsigned char num, int x){
    unsigned char a = 1; a = a << x;
    if(num & a) {
        cout << "Bit ligado! " << endl;
        return 1;}
    else cout << "Bit desligado! " << endl;
    return 0;
}

int main(){
    cout << "Digite um char e um int: ";
    unsigned char num; int x; cin >> num >> x;
    cout << (ligaBit(num,x)) << endl;
    cout << (desligaBit(num,x)) << endl;
    testaBit(num,x);
    return 0;
}
