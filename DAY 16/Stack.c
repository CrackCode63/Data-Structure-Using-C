// Stack implementation using linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;

};
int is_empty(struct node *top){
  if(top == NULL){
    return 1;
  }
  else{
    return 0;
  }
}
int is_full(struct node *top){
  struct node *p = (struct node *)malloc(sizeof(struct node));
  if(p == NULL){
    return 1;
  }
  else{
    return 0;
  }
}

struct node *push(struct node *top, int data){
  if(is_full(top)){
    printf("Stack Overflow\n");
  }
  else{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = data;
  newnode->next = top;
  top = newnode;
  return top;
  }
}

void linked_list_traversal(struct node *ptr){
  while(ptr != NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
  }
  
}
 int pop(struct node **top){
   if(is_empty(*top)){
     printf("Stack Underflow\n");
   }
   else{
     struct node *ptr = *top;
     *top = (*top)->next;
     int x = ptr->data;
     free(ptr);
     return x;
   }
 }

int main(void) {
  struct node *top = NULL;
  top = push(top, 78);
  top = push(top, 7); 
  top = push(top, 8);
  linked_list_traversal(top);
  int element = pop(&top);
  printf("The popped element is %d\n", element);
  
  return 0;
}