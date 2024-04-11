#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  int row, column; scanf(" %d %d", &column, &row);
  int matrix[row+1][column+1];
  int loops; scanf("%d", &loops);
  int ns1=1,lo1=1,ns2=row,lo2=column;
  bool a=true; 

  for (int i=0;i<loops;i++){
    int pa,pb;
    scanf(" %d %d", &pa, &pb);
    switch (pa) {
      case 1:
        ns1++;
        break;
      case 2:
        ns1--;
        break;
      case 3:
        lo1++;
        break;
      case 4:
        lo1--;
        break;
    } 
    switch (pb) {
      case 1:
        ns2++;
        break;
      case 2:
        ns2--;
        break;
      case 3:
        lo2++;
        break;
      case 4:
        lo2--;
        break;
    } 
  
    //printf("Pa (%d, %d)\n Pb (%d, %d)\n", lo1, ns1, lo2, ns2);
    if(ns1 > row || ns1 <= 0){
      printf("PA saiu na posicao (%d,%d) no passo %i\n", lo1, ns1, i+1); a=false; break;}
    if(lo1 > column || lo1 <= 0){
      printf("PA saiu na posicao (%d,%d) no passo %i\n", lo1, ns1, i+1); a=false; break;}
    if(a){
      if(ns2 > row || ns2 <= 0){
        printf("PB saiu na posicao (%d,%d) no passo %i\n", lo2, ns2, i+1); a=false; break;}
      if(lo2 > column || lo2 <= 0){
        printf("PB saiu na posicao (%d,%d) no passo %i\n", lo2, ns2, i+1); a=false; break;}
    }
    if(ns1 == ns2 && lo1 == lo2){ printf("Encontraram-se na posicao (%d,%d) no passo %d\n", lo1, ns1, i+1); a=false; break;} }
  
  if(a) printf("Nao se encontraram\n");
}

