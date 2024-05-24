#include <stdio.h>

void show(int arr[], int x){
  printf("The elements of array is:\n");
  for(int i=0; i<x; i++){
    printf("%d\n", arr[i]);
  }
}

int BinarSearch(int arr[], int x, int ele){
  int low = 0, mid, high = x-1;
  while(low<=high){
    // Search starts
    mid = (low+high)/2;
    if(arr[mid] == ele){
      return mid;
    }
    else if(arr[mid] < ele){
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
    // Search ends
  return -1;
}


int main() {
  int x, ele;
  printf("Enter the size of array: ");
  scanf("%d", &x);
  int arr[x];
  printf("Enter the elements of array: ");
  for (int i = 0; i < x; i++){
    scanf("%d", &arr[i]);
  }
  show(arr, x);
  printf("Enter the element to be searched: ");
  scanf("%d", &ele);
  int result = BinarSearch(arr, x, ele);
  if(result == -1){
    printf("Element not found");
  }
  else{
    printf("Element found at index %d", result);
  }
  return 0;
}