#include <iostream>
#include <cmath>
using namespace std;

float norma(float x, float y){
    //cout << x*x << " xis co xis" << endl;
    //cout << y*y << " ipis co ipis" << endl;
    //cout << sqrt(((x*x)+(y*y))) << " raiz dai ue" << endl;
    float a = abs(sqrt(((x*x)+(y*y))));
    //cout << a << " aquele abs" << endl;
    return a;
}

float convert(float x, float y){
    return ((atan(y/x)*180)/M_PI);
}

int main(){
    cout << "Digite as cordenadas do vetor" << endl
         << "x: ";
    float x; cin >> x;
    cout << "y: ";
    float y; cin >> y;
    cout << endl << " Cordebadas polares: " << endl << "("
         <<  convert(x,y) << " , " << norma(x,y) << " )" << endl;
    return 0;
}
