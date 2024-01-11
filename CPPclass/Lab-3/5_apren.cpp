#include <iostream>
#include <cmath>
using namespace std;

int absolutinho(int a){
    return abs(a);
}

int main(){

   cout << "Digita um numero meu fi" << endl;
   int a; cin >> a;
   cout << absolutinho(a) << endl;

    return 0;
}
