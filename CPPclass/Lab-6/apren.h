#include <iostream>
using namespace std;

bool testaBit(unsigned char num, int x){
    unsigned char a = 1; a = a << x;
    if(num & a)
        return 1;
    return 0;
}

void exibiBits(){
    cout << "Digite um valor entre 0 e 255: ";
    unsigned char num; cin >> num;
    for(int x=0;x<8;x++){
        if(testaBit(num,x)==1)
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
}

int main(){

   exibiBits();
    return 0;
}
