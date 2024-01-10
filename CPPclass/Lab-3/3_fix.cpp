#include <iostream>
using namespace std;

void um(){
    cout << " Tres ";
}

void dois(){
    cout << "Dois";
    um();
}

void tres(){
    cout << " Um ";
    dois();
}

int main(){

    cout << "Comecando agora: ";
    tres();
    cout << endl;

    return 0;
}
