#include <stdio.h>
#include <stdlib.h>
//#include "quickSort.h" 

void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
// Partition function 
int partition(int arr[], int low, int high) 
{ 
  
    // initialize pivot to be the first element 
    int pivot = arr[low]; 
    int i = low; 
    int j = high; 
  
    while (i < j) { 
  
        // condition 1: find the first element greater than 
        // the pivot (from starting) 
        while (arr[i] <= pivot && i <= high - 1) { 
            i++; 
        } 
  
        // condition 2: find the first element smaller than 
        // the pivot (from last) 
        while (arr[j] > pivot && j >= low + 1) { 
            j--; 
        } 
        if (i < j) { 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[low], &arr[j]); 
    return j; 
} 
  
// QuickSort function 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) { 
  
        // call Partition function to find Partition Index 
        int partitionIndex = partition(arr, low, high); 
  
        // Recursively call quickSort() for left and right 
        // half based on partition Index 
        quickSort(arr, low, partitionIndex - 1); 
        quickSort(arr, partitionIndex + 1, high); 
    } 
} 


int main(){
  int arr[800001], aux=0;

  for(int i=0;i<8;i++){
    int n; scanf("%d", &n);
    
    for(int j=0;j<n;j++){
      scanf("%d", &arr[aux++]);
    }
  }
  quickSort(arr,0,aux-1);
  for(int i=0;i<aux;i++) printf("%d ", arr[i]); printf("\n");
}

