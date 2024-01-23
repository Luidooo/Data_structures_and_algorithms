#include <iostream>
//#include "../Lab-6/apren.h"
using namespace std;

unsigned short pontoUnico(unsigned short a, unsigned short b){
    a = a << 8; b = b >> 8;
    unsigned short c = a | b; return c;
}
/*
aritimetico(){

}

mutacaoSimples(){


}

mutacaoDupla(){


}
*/
