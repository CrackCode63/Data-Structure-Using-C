  #include <stdio.h>
  #include <stdlib.h>

  struct stack {
      int top;
      int size;
      int *arr;
  };

  // A function to check if the stack is empty
  int isEmpty(struct stack *ptr) {
      if (ptr->top == -1) {
          return 1;
      } else {
          return 0;
      }
  }

  // A function to check if the stack is full
  int isFull(struct stack *ptr) {
      if (ptr->top == ptr->size - 1) {
          return 1;
      } else {
          return 0;
      }
  }

  // A function to push a value onto the stack
  void push(struct stack *ptr, int val) {
      if (isFull(ptr)) {
          printf("Stack Overflow! Cannot push %d to the stack\n", val);
      } else {
          ptr->top++;
          ptr->arr[ptr->top] = val;
      }
  }

  // A function to pop a value from the stack
  int pop(struct stack *ptr) {
      if (isEmpty(ptr)) {
          printf("Stack Underflow! Cannot pop from the stack\n");
          return -1;
      } else {
          int val = ptr->arr[ptr->top];
          ptr->top--;
          return val;
      }
  }
  // A function to peek at the top value of the stack
  int peek(struct stack *sp, int i){
      int arrayInd = sp->top-i+1;
      if(arrayInd<0){
          printf("Not a valid position for the stack\n");
      }
      else{
          return sp->arr[arrayInd];
      }
  }
  int stacktop(struct stack* ptr){
      return ptr->arr[ptr->top];
  }
  int stackbottom(struct stack* ptr){
      return ptr->arr[0];
  }
  void display(struct stack* ptr){
      for(int i=0;i<=ptr->top;i++){
          printf("%d\n",ptr->arr[i]);
      }
  }

  int main(void) {
      struct stack *s = (struct stack *)malloc(sizeof(struct stack));
      s->size = 10;
      s->top = -1;
      s->arr = (int *)malloc(s->size * sizeof(int));

      // Before pushing values
      if (isEmpty(s)) {
          printf("Stack is empty\n");
      } else {
          printf("Stack is not empty\n");
      }
      if (isFull(s)) {
          printf("Stack is full\n");
      } else {
          printf("Stack is not full\n");
      }

      // Pushing values onto the stack
      push(s, 10);
      push(s, 11);
      push(s, 12);
      push(s, 13);

      // After pushing values
      if (isEmpty(s)) {
          printf("Stack is empty\n");
      } else {
          printf("Stack is not empty\n");
      }
      if (isFull(s)) {
          printf("Stack is full\n");
      } else {
          printf("Stack is not full\n");
      }
      // Displaying the stack
      display(s);

      printf("The value of top is %d\n", s->arr[s->top]);

      // Popping a value from the stack and displaying it
      printf("Popped value %d\n", pop(s));

      // Peeking at the top value of the stack
      // printf("The value of top is %d\n", peek

      printf("The stack top is : %d\n", stacktop(s));
      printf("The stack bottom is : %d\n", stackbottom(s));

      // Free the allocated memory
      free(s->arr);
      free(s);

      return 0;
  }
