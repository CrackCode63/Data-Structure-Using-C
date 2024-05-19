// This program is based on my thinking.
// I am hunderd percent sure that this program works efficiently.
// But not sure about its time and space complexity.
#include <stdio.h>

int main(void) {
  printf("Insertion in Array!\n");
  int n, no, i, pos;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int array[n], array1[n+1];

  printf("Enter the elements of the array: ");
  for(i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  printf("Enter the element to be inserted: ");
  scanf("%d", &no);

  printf("Enter the position to be inserted: ");
  scanf("%d", &pos);

// This is the main part of the program.
// First loop of the program run till the index inserted by the user.
  for(i = 0; i < pos; i++) {
    array1[i] = array[i];
  }

// Here, the element inserted by the user are stored at the given index by the user.
  array1[pos] = no;


// This is the second loop of the program starts from the index(inserted by the user) and run till the size of the array.
  for(i = pos; i < n; i++) {
    array1[i + 1] = array[i];
  }

// And, this part of the program is printing the new array with the new element at the desired position.
  printf("The new array is: ");
  for(i = 0; i < n + 1; i++) {
    printf("%d ", array1[i]);
  }

  return 0;
}
