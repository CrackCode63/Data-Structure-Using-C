

#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void traversal(struct Node *head){
  struct Node *ptr = head;
  do{
    printf("\nThe elements in the linked list are: %d",ptr->data);
    ptr = ptr->next;
  }
    while(ptr!=head);
}

struct Node *insertAtFirst(struct Node *head, int data){
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = head->next;
  while(p->next!=head){
    p = p->next;
  }
  // At this point p points to the last node of this circular linked list
  p->next = ptr;
  ptr->next = head;
  head = ptr;
  return head;
}

int main(void) {
  struct Node * head;
  struct Node * second;
  struct Node * third;
  struct Node * fourth;

  // Allocate memory for nodes in the linked list in heap
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  // Link first and second nodes
  head->data = 7;
  head->next = second;

  // Link second and third nodes
  second->data = 11;
  second->next = third;

  // Link third and fourth nodes
  third->data = 10;
  third->next = fourth;

  // Terminate the list at the fourth node
  fourth->data = 66;
  fourth->next = head;

  traversal(head);
  printf("The circular linked list after insertion at first is: \n");
  head = insertAtFirst(head, 69);
  traversal(head);
  return 0;
}