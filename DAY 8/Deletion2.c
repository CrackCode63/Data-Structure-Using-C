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

// Delete the node at the given index.
struct Node *deleteAtIndex(struct Node *head, int index) {
  struct Node *p = head;
  struct Node *q = head->next;
  // This loop run util the q reach the index of the node which we want to delete
  for (int i = 0; i < index - 1; i++){
    // During running the loop, p will point to the previous node of the node which we want to delete
    // And , q will point to the next node of the node which we want to delete
    p = p->next;  //This line indicate that p  pointer jumps to the next node
    q = q->next;  //This line indicate that q  pointer jumps to the next node
  }
  // As soon as q reach the index of the node which we want to delete, we store the value of q->next in the p->next.
  p->next = q->next;
  // Free memory
  free(q);
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
  head = deleteAtIndex(head, 2);
  traversal(head);
  return 0;
}