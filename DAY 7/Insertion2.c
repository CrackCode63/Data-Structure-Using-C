// We are gping to insert a node in the linked list.
// CASE 1: Inserting at the beginning of the linked list
// CASE 2: Inserting at the end of the linked list
// CASE 3: Inserting at a particular position
// CASE 4: Inserting after after a node
#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void traversal(struct Node *ptr){
  while(ptr!=NULL){
    printf("\nThe elements in the linked list are: %d",ptr->data);
    ptr = ptr->next;
  }
}

struct Node *insertAtBeginning(struct Node *head, int data){
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->next = head;
  ptr->data = data;
  return ptr;

}

struct Node *insertAtIndex(struct Node *head, int data, int Index){
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  struct Node *p = head;
  int i = 0;
  while(i!=Index-1){
    p = p->next;
    i++;
  }
  ptr->data = data;
  ptr->next = p->next;
  p->next = ptr;
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
  fourth->next = NULL;

  traversal(head);
  printf("\n");
  head = insertAtBeginning(head, 56);
  traversal(head);
  printf("\n");
  head = insertAtIndex(head, 45, 3);
  traversal(head);


  return 0;
}