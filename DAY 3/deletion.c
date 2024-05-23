#include <stdio.h>

void show(int arr[], int n){
  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
}
int deletion(int arr[], int size, int index){
  for(int i=index; i<size-1; i++)
    arr[i] = arr[i+1]; 
}


int main(void) {
   int arr[100]= {1,2,3,4,5};
  int n = 5;
  show(arr , n);
  deletion(arr, n, 2);
  n--;
  printf("\n");
  show(arr , n);
  
  return 0;