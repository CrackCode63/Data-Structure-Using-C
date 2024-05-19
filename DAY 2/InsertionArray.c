 #include <stdio.h>

// This is traversal of the array.
// What is traversal?
// Traversal means to visit each and every element of an array.
// Traversal is a very important concept in computer programming.
void display(int arr[], int n) {
    printf("Elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Here, we are going to design a function for insertion.
int IndexInsertion(int arr[], int size, int element, int index, int capacity) {
    if (size >= capacity) {
        return -1; // Array is full
    }
    if (index < 0 || index > size) {
        return -1; // Invalid index
    }
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(void) {
    int x;
    printf("Enter the size of the array: ");
    scanf("%d", &x);

    // Assuming a maximum capacity for demonstration
    int capacity = x + 10;
    int arr[capacity], size, element, index;

    size = x;
    printf("Enter the elements of the array: ");
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    display(arr, size);

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the index at which the element is to be inserted: ");
    scanf("%d", &index);

    int result = IndexInsertion(arr, size, element, index, capacity);
    if (result == 1) {
        size += 1;
        display(arr, size);
    } else {
        printf("Insertion failed: either the array is full or the index is invalid.\n");
    }

    return 0;
}
