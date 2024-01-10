#include <iostream>
using namespace std;

float  media(float a, float b){
    return a+b/2;
}

int main(){

    float a,b;
    cin >> a >> b;
    cout << media(a,b) << endl;

    return 0;
}
