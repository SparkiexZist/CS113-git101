//6210400698 Teeraphat Sutprasoet//
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
}node;

// node * createLinkedList(int size, int num[]);

void displayList(node * head);

// node * createLinkedList(int size,int num[])
// {
//   int i = 0;
//   node * head = NULL;
//   node * temp = NULL;
//   node * p = NULL;
//   for(i = 0;i < size;i++)
//   {
//     temp = (node*)malloc(sizeof(node));
//     temp -> data = num[i];
//     temp -> next = NULL;
//
//     if (head == NULL)
//     {
//       head = temp;
//     }
//     else
//     {
//       p = head;
//       while(p->next != NULL)
//         p = p->next;
//       p -> next = temp;
//     }
//   }
//   return head;
// }

void displayList(node * head)
{
  node * tmp;
  for (tmp=head; tmp; tmp = tmp->next)
    printf("%d\n", tmp->data);
}

int Insertion_Sort(node **h, int x)
{
    node *temp = (node*)malloc(sizeof(node));
    temp->data = x;
    if (*h == NULL) {
        temp->next = *h;
        *h = temp;
    } else {
        node *tmp = *h;
        node *prev = NULL;
        while (1) {
            if (tmp == NULL || tmp->data >= temp->data)
                break;
            prev = tmp;
            tmp = tmp->next;
        }
        temp->next = tmp;
        if (prev != NULL)
            prev->next = temp;
        else
            *h = temp;

    }
    return 0;
}

int main()
{
  int n,num[10],size,i=0;
  node *HEAD = NULL;
  int input;

  while (scanf("%d", &input) == 1)
  {
  if (input <= -1)
    break;
  else
    Insertion_Sort(&HEAD, input);
  }
  /*HEAD = createLinkedList(size,num);*/
   displayList(HEAD);
  return 0;
}
