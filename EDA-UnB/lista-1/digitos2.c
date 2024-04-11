#include <stdio.h>
#include <string.h>

int main(){
  int n; scanf("%d", &n);
  char string[n];
  for(int i=0;i<n;i++) scanf(" %c", &string[i]); 
  //for(int i=0;i<n;i++) printf("%c", string[i]); printf("\n");


  char num[1001], num2[1001];
  int w=1;
  while(strcmp(num2,num) != 1){
    for(int i=0;i<w;i++) num[i] = string[i];
    for(int i=0;i<w;i++) printf("%c", num[i]); printf("\n");
      
    int z=w+1;
    //printf("%d %d %d",z, z+1, w);
    for(int i=0, h=w;h<z;i++,h++) num2[i] = string[h];
    for(int i=0;i<w;i++) printf("%c", num2[i]); printf("\n");
    w++;
  }

  //verifica se o prox 

}
