#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

void traversal(struct Node *ptr) {
  while (ptr != NULL) {
    printf("\nThe elements in the linked list are: %d", ptr->data);
    ptr = ptr->next;
  }
}
struct Node *deleteWithKey(struct Node *head, int key) {
  struct Node *p = head;
  struct Node *q = head->next;
  while(q->data != key && q->next != NULL){
    p = p->next;
    q = q->next;
  }
  if(q->data == key){
    p->next = q->next;
    free(q);
  }
  return head;
}



int main(void) {
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;

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

  printf("Linked list before deletion\n");
  traversal(head);
  printf("\n");

  printf("Linked list after deletion\n");
  head = deleteWithKey(head, 10);
  traversal(head);
  return 0;
}