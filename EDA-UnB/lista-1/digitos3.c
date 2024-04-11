#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main(){
  int n;scanf("%d", &n);
  char string[n+1];
  for(int i=0;i<n;i++){scanf(" %c", &string[i]);}
  char right[n+1], left[n+1];

  int number=1;
  for(int i=0;i<n/2+1;i++){
    for (int k=0;k<i;k++) {
      right[k] = string[k];
      left[k] = string[k+number];
      printf("%s\n%s\n", right, left );
    }
    number++;
  }

}
