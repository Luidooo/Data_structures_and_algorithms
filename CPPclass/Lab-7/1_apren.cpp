#include <iostream>
#include <cmath>
using namespace std;

void bhaskara(float a, float b, float c){
    double delta = b*b - 4*a*c;
    if(delta >= 0){
        double r1 = (-b + sqrt(delta)) / (2*a);
        double r2 = (-b - sqrt(delta)) / (2*a);
        cout << " r1 " << r1 << " e r2 " << r2 << endl;
    }
    else
        cout << "vish eh complexa viu" << endl;
}

int main(){
    float a=1,b=-3,c=2;
    bhaskara(a,b,c);
    return 0;
}
