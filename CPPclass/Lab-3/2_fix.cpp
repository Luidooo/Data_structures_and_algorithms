#include <iostream>
using namespace std;

void hifen(){
    for(int i=0;i<10;i++)
        cout << "-";
}

void pequena(){
    hifen();
    cout << endl;
}

void media(){
    hifen();
    hifen();
    cout << endl;
}


void grande(){
    hifen();
    hifen();
    hifen();
    cout << endl;
}

int main(){

    pequena();
    media();
    grande();
    cout << "C++!";
    grande();
    media();
    pequena();
}
