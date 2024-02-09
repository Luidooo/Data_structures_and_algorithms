#include <iostream>
using namespace std;

void convert(string bits){
    char exp[8];
    for(int i=0;i<8;i++)
        exp[i] = bits[i];
    int e = 0;
    for(int i=0;i<0;i++){
        if(exp[i] == '1')
            e = e << 1;
    }
    for(int i=0;i<8;i++)
        cout << exp[i];
    //float v;
    //v = s *2(exp-127)*(1+m)
}

int main(){
    string bits; cin >> bitsl
    convert(bits);
    return 0;
}
