// We are going to learn about the Peek opeation in stack
// 
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
// A Function for poping the value in the stack.
int pop(struct stack *ptr){
  if(isEmpty(ptr)){
    printf("Stack Underflow! Cannot pop from the stack\n");
    return  -1;
  }
  else{
    int val = ptr->arr[ptr->top];
    ptr->top--;
  }
}

// A Function for peeking the value in the stack.
int peek(struct stack *ptr, int i){
  int arrayInd = ptr->top - i + 1;
  if(arrayInd < 0){
    printf("Not a valid position for the stack\n");
  }
  else{
    return ptr->arr[arrayInd];
  }
}


int main(void) {
  struct stack *s = (struct stack *)malloc(sizeof(struct stack));
  s->size = 10;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));


  // Before pushing the value.
  // if(isEmpty(s)){
  //   printf("Stack is empty\n");
  // }
  // else{
  //   printf("Stack is not empty\n");
  // }
  // if(isFull(s)){
  //   printf("Stack is full\n");
  // }
  // else{
  //   printf("Stack is not full\n");
  // }

  // Pushing the value.
  push(s, 10);
  push(s, 11);
  push(s, 12);
  push(s, 13);
  push(s, 14);
  push(s, 15);
  push(s, 16);
  push(s, 17);
  push(s, 18);
  push(s, 19);



  // After pushing(pop) the value in the stack.
  // if(isEmpty(s)){
  //   printf("Stack is empty\n");
  // }
  // else{
  //   printf("Stack is not empty\n");
  // }
  if(isFull(s)){
    printf("Stack is full\n");
  }
  else{
    printf("Stack is not full\n");
  }
  printf("The value of top is %d\n", s->top);
  printf("Popped value %d",pop(s));

  // Peeking the value in the stack.
  printf("\n");
  for(int j = 0; j < s->top+1; j++){
    printf("The value at position %d is %d\n", j, peek(s,j));
  }
  return 0;
}