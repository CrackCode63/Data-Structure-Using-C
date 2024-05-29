#include <stdio.h>
#include <stdlib.h>


struct stack{
  int top;
  int size;
  int *arr;
};

// A function for check the stack is empty or not
int isEmpty(struct stack *ptr){
  if(ptr->top == -1){
    return 1;
  }
  else{
    return 0;
  }
}

// A function for check the stack is full or not
int isFull(struct stack *ptr){
  if(ptr->top == ptr->size-1){
    return 1;
  }
  else{
    return 0;
  }
}


// A Function for pushing the value in the stack.
void push(struct stack *ptr, int val){
  if(isFull(ptr)){
    printf("Stack Overflow! Cannot push to the stack\n");
  }
  else{
    ptr->top++;
    ptr->arr[ptr->top] = val;
  }
  
}


int main(void) {
  struct stack *s = (struct stack *)malloc(sizeof(struct stack));
  s->size = 10;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));


  // Before pushing the value.
  if(isEmpty(s)){
    printf("Stack is empty\n");
  }
  else{
    printf("Stack is not empty\n");
  }
  if(isFull(s)){
    printf("Stack is full\n");
  }
  else{
    printf("Stack is not full\n");
  }

  // Pushing the value.
  push(s, 10);


  
  // After pushing(pop) the value in the stack.
  if(isEmpty(s)){
    printf("Stack is empty\n");
  }
  else{
    printf("Stack is not empty\n");
  }
  if(isFull(s)){
    printf("Stack is full\n");
  }
  else{
    printf("Stack is not full\n");
  }
  return 0;
}