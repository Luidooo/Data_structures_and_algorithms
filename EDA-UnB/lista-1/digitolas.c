#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aumentaUm(char *string, char *aux, char *comp, char *aux2, int n, int w){
  int cont=0;
  int sumAux=0, sumComp=0;
    for(int e=0;e<n/2+1;e++, w++){
      for(int i=0;i<w;i++) {
        aux[i] = string[i];
        comp[i] = string[i+w];
      }
      for(int i=0;i<w;i++){
        sumAux += aux[i];
        sumComp += comp[i];
        printf("%d %d\n", sumAux, sumComp);
        printf("%d\n", w);
        printf("%s %s\n", aux, comp);

      }
      if(sumAux == sumComp+1){
        for(int i=0;i<w;i++){
        aux2[i] = string[i];
        }
      }
    }
  for(int i=0;i<cont;i++) printf("%c", aux2[i]); printf("\n");
}


int main(){
  int n; scanf("%d", &n);
  char string[n+1];
  for(int i=0;i<n;i++){ scanf(" %c", &string[i]); }
  //printf("The first string: %s\n", string);
  char aux[n+1], comp[n+1], aux2[n/2+1]; int w=0;
  aumentaUm(string, aux, comp, aux2, n, w);
  


}
