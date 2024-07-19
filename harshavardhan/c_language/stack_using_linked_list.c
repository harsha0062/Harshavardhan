#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*top = NULL;


   struct Node *newNode;
void push()
{
   newNode = (struct Node*)malloc(sizeof(struct Node));
   printf("enter the element :\n");
   scanf("%d",&(newNode->data));
   if(top == NULL)
      newNode->next = NULL;
   else
   {
      newNode->next = top;
        top = newNode;
   }
}
void pop()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp = top;
      printf("\nDeleted element: %d", temp->data);
      top = temp->next;
      free(temp);
   }
}
void display()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp = top;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL",temp->data);
   }
}
void main()
{
   int choice, value;
   while(1){
      printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: push(); break;
	 case 2: pop(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
