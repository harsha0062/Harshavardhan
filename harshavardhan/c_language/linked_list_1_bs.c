//linked list
#include<stdio.h>
#include<stdlib.h>
struct cse
{
    int d;
    struct cse *nxt;  
};
struct cse *head=NULL,*t=NULL;
int c=0;
int add_back(int x)
{
    struct cse *newnode=(struct cse *)malloc(sizeof(struct cse));
    newnode->d=x;c++;
    newnode->nxt=NULL;
    if(head==NULL)
    head=newnode;
    else
    {
        t=head;
        while(t->nxt!=NULL)
        t=t->nxt;
        t->nxt=newnode;
    }
}
int s=0;
int mid()
{
    printf("%d\n",c);
    int i=0;
    printf("mid element :");
    while(t->nxt!=NULL&&i!=(c/2)){
    t=t->nxt;
    i++;
    }
    printf("%d\t",t->d);
}
int display()
{
    t=head;
    while(t!=NULL)
    {
        printf("%d\n",(t->d));
        t=t->nxt;
        
    }
    sum();
}
int sum()
{
    s=0;
    t=head;
    while(t!=NULL){
    if((t->d)%2==0)s+=t->d;
    (t=t->nxt);
    }
    printf("%d\n",s);
  
}
int main()
{
    add_back(20);
    add_back(30);
    add_back(40);
    add_back(50);
    add_back(60);
    add_back(70);
    display();
    mid();
}