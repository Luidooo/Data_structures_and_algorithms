#include <iostream>
using namespace std;

#define red "\033[4;31m"
#define default "\033[m"

/*
    \033[ estilo;letra;fundo m

Etilos: 0 = normal, 1 = bold, 4 = undeline, 7 = negative
Letra: 30 = Black, 31 = red, 32 = green, 33 = yellow,
       34 = blue, 35 = magenta, 36 = cyan, 37 = white
Fundo: 40 = black, 41 = red, 42 = green, 43 = yellow,
       44 = blue, 45 = magenta, 46 = cyan, 47 = white;

*/

int main(){
    cout << red << "vermelhin ne" << "default" << endl;
}
