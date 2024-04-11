#include <stdio.h>
#include <string.h>

void bynarySearchStrings(int n, char *num, int cont){
  if(n == 0) {printf ("nao achou\n"); return;}
  int j=n/2;  
  char left[j], right[j];
  for(int i=0,k=j ; k<n; i++, k++) left[i] = num[k];
  for(int i=0,k=j; k<n; i++,k++) right[i] = num[i];
  if(strcmp(left, right) == 1 && cont<6) {
    cont++;
    printf("if: %s %s %d\n", right, left, strcmp(left,right));
    bynarySearchStrings(j, right, cont);
  }
    //for(int i=0;i<j;i++){ printf("%c", num[i]);} printf("\n"); } //}
  else{
    //for(int k=j ; k>=0; k--) num2[k] = num[k];
    printf("else: %s %s %d\n", right, left, strcmp(left,right));
    bynarySearchStrings(j, right, cont);
    }
}

int main(){
  int n; scanf("%d", &n); int cont=0;
  char num[n];
  for(int i=0;i<n;i++){ scanf(" %c", &num[i]); }
  bynarySearchStrings(n, num, cont);
}
  


