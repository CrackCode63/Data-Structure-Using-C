#include <stdio.h>

void show(int arr[], int x){
  printf("The elements of array is:\n");
  for(int i=0; i<x; i++){
    printf("%d\n", arr[i]);
  }
}

void search(int arr[], int x, int ele){
  int found = 0;
  for(int i=0; i<x; i++){
    if(ele == arr[i]){
      printf("Element found at index %d\n", i);
      found = 1;
      break;
    }
  }
  if(found == 0){
    printf("Element not found\n");
  }   
}

int main(void) {
  int x, ele;
  printf("Enter the size of array: ");
  scanf("%d", &x);
  int arr[x];
  printf("Enter the elements of array: ");
  for (int i = 0; i < x; i++){
    scanf("%d", &arr[i]);
  }

  
    // Function calling for printing the array.
    show(arr, x);

  printf("Enter the element to be searched: ");
  scanf("%d", &ele);

  // Function calling for searching the element.
  search(arr, x, ele);
  
  return 0;
}