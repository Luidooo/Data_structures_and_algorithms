#include <stdio.h>
#include <stdlib.h>
//#include "mergeSort.h" 

typedef struct pair{
  int linha;
  int posi;
  int nota;
}pair;


void merge(pair arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
    pair L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++){
        L[i].nota = arr[l + i].nota; 
        L[i].posi = arr[l + i].posi; 
        L[i].linha = arr[l + i].linha; 
    }
    for (j = 0; j < n2; j++){
        R[j].nota = arr[m + 1 + j].nota;
        R[j].posi = arr[m + 1 + j].posi;
        R[j].linha = arr[m + 1 + j].linha;
    }
  
    i = 0; j = 0; k = l; 

    while (i < n1 && j < n2) { 
        if (L[i].nota >= R[j].nota) { 
            arr[k].nota = L[i].nota; 
            arr[k].posi = L[i].posi; 
            arr[k].linha = L[i].linha; 
            i++; 
        } 
        else { 
            arr[k].nota = R[j].nota; 
            arr[k].posi = R[j].posi; 
            arr[k].linha = R[j].linha; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        arr[k].nota = L[i].nota; 
        arr[k].posi = L[i].posi; 
        arr[k].linha = L[i].linha; 
        i++; 
        k++; 
    } 
  
    while (j < n2) { 
        arr[k].nota = R[j].nota; 
        arr[k].posi = R[j].posi; 
        arr[k].linha = R[j].linha; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(pair arr[], int l, int r) 
{ 
    if (l < r) { 
        int m = l + (r - l) / 2; 
  
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
        merge(arr, l, m, r); 
    } 
} 

int main(){
  int tests; scanf("%d", &tests);
  for(int c=0;c<tests;c++){
    int linhas, problemns, aux=0;  
    scanf("%d", &linhas);
    scanf("%d", &problemns);
    pair arr[linhas*problemns];
    for(int r=0;r<linhas;r++){
      for(int w=0;w<problemns;w++){
        float temp;
        scanf( "%f ", &temp);
        arr[w+aux].nota = (int)(temp*100000+2);
        arr[w+aux].posi = w+1;
        arr[w+aux].linha = r+1;
      }
      aux += problemns;
    }
    //for(int w=0;w<linhas*problemns;w++) printf("%d,%d,%d ", arr[w].nota, arr[w].linha, arr[w].posi); printf("\n");
    mergeSort(arr ,0,linhas*problemns-1);
    //for(int w=0;w<linhas*problemns;w++) printf("%d,%d,%d ", arr[w].nota, arr[w].linha, arr[w].posi); printf("\n");
    for(int w=0;w<linhas*problemns;w++) printf("%d,%d ", arr[w].linha, arr[w].posi); printf("\n");
    //for(int w=linhas*problemns-1;w>=0;w--) printf("%d,%d ", arr[w].linha, arr[w].posi); printf("\n");
  }


}
