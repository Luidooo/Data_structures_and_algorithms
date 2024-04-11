#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct pair { 
  int ns;
  int lo;
}pair;

void micRange(pair mic, pair fo, int cont){
  if(fo.lo >= mic.lo-1 &&
     fo.lo <= mic.lo+1 &&
     fo.ns >= mic.ns-1 &&
     fo.ns <= mic.ns+1)
    cont++;
}

int main(){
  int min=0, row, column; scanf(" %d %d ", &row , &column);
  pair fo, mic;
  scanf(" %d %d", &mic.lo, &mic.ns); 
  fo.ns = 0; fo.lo = 0; 
  micRange(mic, fo, min);
  int loops; scanf(" %d", &loops);  
  for(int i=0;i<loops;i++){
    int k; scanf(" %d", &k);
      switch (k) {
        case 1:
          fo.ns++;
          break;
        case 2:
          fo.ns--;
          break;
        case 3:
          fo.lo++;
          break;
        case 4:
          fo.lo--;
          break;
      } 
   if(fo.lo >= mic.lo-1 &&
     fo.lo <= mic.lo+1 &&
     fo.ns >= mic.ns-1 &&
     fo.ns <= mic.ns+1)
    min++;
 
  }
  printf("%d\n", min);
}
