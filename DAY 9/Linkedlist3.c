// We are going to learn about circualar linked list
// What is circualar linked list?
// Circualar linked list is a linked list in which the last node poinst to the first node
// In circualar linked list we can insert and delete the node in any position
// In circualar linked list we can not delete the first node
// In circualar linked list we can not insert the node at the end
// In circualar linked list we can not insert the node at the beginning
// In circualar linked list we can not delete the node at the end
// In circualar linked list we can not delete the node at the beginning


#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

// void traversal(struct Node *head){
//   struct Node *ptr = head;
//     printf("\nThe elements in the linked list are: %d",ptr->data);
//     ptr = ptr->next;
//   while(ptr!=head){
//     printf("\nThe elements in the linked list are: %d",ptr->data);
//     ptr = ptr->next;
//   }
// }

// We can perform the traversal using do-while loop
void traversal(struct Node *head){
  struct Node *ptr = head;
  do{
    printf("\nThe elements in the linked list are: %d",ptr->data);
    ptr = ptr->next;
  }
    while(ptr!=head);
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


  return 0;
}