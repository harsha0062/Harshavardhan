#include<stdio.h>
#include<stdlib.h>
struct cse
{
       int d;
       struct cse *nxt;
       struct cse *prev;
};
struct cse *t=NULL;
struct cse *t1=NULL;
struct cse *head=NULL;
struct cse *tail=NULL;
int add_back(int x)
{
    struct cse *newnode=(struct cse *)malloc(sizeof(struct cse));
    newnode->d=x;
    newnode->nxt=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        newnode->prev=tail;
        tail->nxt=newnode;
        tail=newnode;
    }
   
}
int display_for()
{
    t=head;
    printf("\n");
    while(t!=NULL)
    {
        printf("%d\t",t->d);
        t=t->nxt;
    }
}

int display_rev()
{
    t=tail;
    printf("\n");
    while(t!=NULL)
    {
        printf("%d\t",t->d);
        t=t->prev;
    }
}
int mid()
{
    t=head;
    t1=tail;
    while(t!=t1&&t->nxt!=t1)
    {
        t=t->nxt;
        t1=t1->prev;
    }
    printf("%d",t->d);
}
int len()
{
    t=head;
    t1=tail;
    while(t!=t1&&t->nxt!=t1)
    {
        t=t->nxt;
        t1=t1->prev;
    }
    if(t1==t)
    printf("\neven");
    else
    printf("odd");
}
int main()
{
    add_back(1);
    add_back(2);
    add_back(3);
    add_back(4);
    add_back(5);
    mid();
    display_for();
    display_rev();
    len();
}