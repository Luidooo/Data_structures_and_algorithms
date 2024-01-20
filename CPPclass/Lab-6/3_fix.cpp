#include <iostream>
using namespace std;

char charada(char ch, int x){
   return ch+x;
}

int main(){

    cout << "Digite um char e um int: ";
    char ch; int x;cin >> ch >> x;
    cout << charada(ch,x) << endl;

    return 0;
}
