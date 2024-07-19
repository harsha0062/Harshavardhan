#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;
struct Node *newNode;
   
void insert()
{
   newNode = (struct Node*)malloc(sizeof(struct Node));
   printf("enter the element :\n");
   scanf("%d",&(newNode->data));
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else
   {
      rear -> next = newNode;
      rear = newNode;
   }
}
void delete()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else
   {
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else
    {
        struct Node *temp = front;
        while(temp != NULL)
        {
            printf("%d\t",temp->data);
            temp = temp -> next;
        }
      printf("\n");
    }
}

void main()
{
   int choice;
   while(1)
   {
      printf("1.Dequeue\n2.Enqueue\n3.Display\n4.Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice)
        {
            case 1:insert();break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: exit(0);
        }
   }
}
