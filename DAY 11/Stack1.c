// We are going to learn about stack.
// What is a stack?
// A stack is a linear data structure which follows a particular order in which the operations are performed.
// The order is First In Last Out / Last In First Out (LIFO).
// The last element inserted is the first element to be removed.
// Stacks follow a particular order in which the operations are performed.
// Stacks are also called LIFO (Last In First Out) data structures.
// Stacks are a fundamental data structure in computer science.
// Stacks are used to store and retrieve items in a particular order.
// Stacks are often used to implement a variety of algorithms and data structures.
// Stacks are often used to solve problems that require last-in, first-out (LIFO) behavior.
// Stacks are often used to implement recursion.
// 
// The followings operation are performed on stack
// 1. Push
// 2. Pop
// 3. Peek



// Iplementation of stack using array


#include <stdio.h>

struct stack{
    int size;
    int top;
    int *arr;
  };

int isEmpty(struct stack *ptr){
  if(ptr->top == -1){
    return 1;
  }
  else{
    return 0;
  }
}
int isFull(struct stack *ptr){
  if(ptr->top == ptr->size-1){
    return 1;
  }
  else{
    return 0;
  }
}

int main(void) {
  struct stack s;
  s.size = 5;
  s.top = -1;
  s.arr = (int *)malloc(s.size * sizeof(int));
  
  // Pushing an element in the stack
  s.arr[0] = 7;
  s.top++;


  if(isFull(&s)){
    printf("The stack is full\n");
  }
  else{
    printf("The stack is not full\n");
  }
  if(isEmpty(&s)){
    printf("The stack is empty\n");
  }
  else{
    printf("The stack is not empty\n");
  }
  
  return 0;
}