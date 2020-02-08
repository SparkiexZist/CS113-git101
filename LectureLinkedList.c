#include <stdio.h>
#include <stdlib.h>

typedef struct node // Define and Struct node.
{
  int data;
  struct node *next;
}node;

node * createLinkedList(int n); // Define Function.

void displayList(node * head); // Define Function.


int main()
{
  int n,num[]={1,2,3,4,5,6,7,8,9,10},size;
  size = sizeof(num)/sizeof(num[0]);// Find size of num[]
  node *HEAD = NULL;// Create NULL Head of linkedlist.
  printf("How many nodes : ");
  scanf("%d",&n);
  HEAD = createLinkedList(n);// Call function to create linked list.
  displayList(HEAD);// Call function to display linked list.
  return 0;
}

node * createLinkedList(int n) // Create linked list function.
{
  int i = 0;
  node * head = NULL;
  node * temp = NULL;
  node * p = NULL;
  for(i = 0;i < n;i++)
  {
    temp = (node*)malloc(sizeof(node)); // allocate memory for temp.
    printf("\n Enter the data for node number: ",i+1);
    scanf("%d",&(temp->data)); // put input to data
    temp -> next = NULL; // move temp to the next location.

    if (head == NULL) // If head is empty. Fill it with temp.
    {
      head = temp;
    }
    else
    {
      p = head;
      while(p->next != NULL)
        p = p->next; // move p to space where it's null.
      p -> next = temp; // if found null.Replace with temp.
    }
  }
  return head;
}

void displayList(node * head)
{
  node * p = head; // Start from head.

  while(p != NULL)
  {
    printf("%d->",p->data); // print data while p != NULL.
    p = p->next; // move p to next location.
  }
}
