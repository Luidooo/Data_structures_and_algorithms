// C program for Merge Sort 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 


typedef struct numIndex{
  int cod;
  int ind;
}numIndex;

typedef struct vectorStrings{
  char string[20];
}vectorStrings;

void merge(numIndex arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	numIndex L[n1], R[n2]; 

	for (i = 0; i < n1; i++){
		L[i].cod = arr[l + i].cod; 
		L[i].ind = arr[l + i].ind; 
  }
	for (j = 0; j < n2; j++){
		R[j].cod = arr[m + 1 + j].cod; 
		R[j].ind = arr[m + 1 + j].ind; 
  }

	i = 0; j = 0; k = l; 

	while (i < n1 && j < n2) { 
		if (L[i].cod <= R[j].cod) { 
			arr[k].cod = L[i].cod; 
			arr[k].ind = L[i].ind; 
			i++; 
		} 
		else { 
			arr[k].cod = R[j].cod; 
			arr[k].ind = R[j].ind; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) { 
		arr[k].cod = L[i].cod; 
		arr[k].ind = L[i].ind; 
		i++; 
		k++; 
	} 

	while (j < n2) { 
		arr[k].cod = R[j].cod; 
		arr[k].cod = R[j].cod; 
		j++; 
		k++; 
	} 
} 

void mergeSort(numIndex arr[], int l, int r) 
{ 
	if (l < r) { 
		// Same as (l+r)/2, but avoids 
		// overflow for large l and r 
		int m = l + (r - l) / 2; 

		// Sort first and second halves 
		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r); 

		merge(arr, l, m, r); 
	} 
} 


int binarySearch(numIndex arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid].cod == x)
            return mid;
        if (arr[mid].cod > x) {
            return binarySearch(arr, l, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}


int main(){
  int n; scanf("%d", &n);
  numIndex cods[n];
  vectorStrings names[n+1];
  for(int i=0;i<n;i++){
    scanf("%d %s", &cods[i].cod, names[i].string);
    cods[i].ind = i;
  }

  /*
  for(int i=0;i<n;i++) {
    printf("Elemento %d, de codigo %d e indice %d refernte a string %s\n",
            i, cods[i].cod, cods[i].ind, names[cods[i].ind].string);

  }
  */

  mergeSort(cods, 0, n);
  
  /*
  for (int i=0;i<n;i++) {
    printf(" %d %d   ", cods[i].cod, cods[i].ind);
  }
  puts("");
  
     
  for (int i=0;i<n;i++) {
    printf("%d %s\n", i, names[i].string);
  }
  */
  int num;
  while(scanf("%d", &num) != EOF){
    int codInd = binarySearch(cods, 0, n, num);
    if(codInd >= 0){
      printf("%s\n", names[cods[codInd].ind].string);
    }  
    else {
      printf("undefined\n");
    }
  }
}



