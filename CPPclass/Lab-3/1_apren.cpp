#include <iostream>
#include <cmath>
using namespace std;

int pow(int a){
    return a *= a;
}

int main(){

    int ax,ay,bx,by;

    cin >> ax >> ay;
    cin >> bx >> by;

    cout << "A Hipotenusa eh " << sqrt(pow(ax-bx) + pow(ay-by)) << endl;

    return 0;
}
