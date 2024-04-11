#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long long main(){
  long long int n,media=0; scanf("%lld", &n);
  long long int ar[n];
  for(int i=0;i<n;i++){
    scanf("%lld", &ar[i]);
    media += ar[i];
  }
  media /= n;
  bool a=false;
  for(int i=0;i<n;i++){
    if(ar[i] > media){ printf(" %lld", ar[i]);
      a=true;}
  }
  if(!(a)) printf(" 0");
}
