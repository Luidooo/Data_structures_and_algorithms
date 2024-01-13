#include <iostream>
#include <cmath>
using namespace std;

#define power(a) (a * a)


float norma(float x, float y){
    //cout << x*x << " xis co xis" << endl;
    //cout << y*y << " ipis co ipis" << endl;
    //cout << sqrt(((x*x)+(y*y))) << " raiz dai ue" << endl;
    float a = abs(sqrt(((x*x)+(y*y))));
    //cout << a << " aquele abs" << endl;
    return a;
}

int main(){
    cout << "Digite as cordenadas do vetor" << endl
         << "x: ";
    float x; cin >> x;
    cout << "y: ";
    float y; cin >> y;
    cout << endl << " O tamanho do vetor eh " << norma(x,y) << endl;
    return 0;
}
