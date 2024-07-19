#include<stdio.h>
#include<stdlib.h>
struct cse
{
       int d;
       struct cse *nxt;
};
int c=0;
struct  cse *head=NULL;
struct  cse *t=NULL,*p=NULL;
struct cse* add_back(int x)
{
    struct  cse *newnode=(struct cse *)malloc(sizeof(struct cse));
    c++;
    newnode->d=x;
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
    return newnode;
}  
int f=0;
void search(int x)
{
    t=head;
    while(t!=NULL)
    {
        if(x==t->d){
        printf("\ndata found at %d\n",x),f=1;
        }
        t=t->nxt;
    }
    if(f==0)
    printf("\ndata not found at %d\n",x);
}
int factorial()
{
    int i,fact;
    t=head;
    while(t!=NULL)
    {
        fact=1;
        for(i=1;i<=t->d;i++)
        fact*=i;
        printf("\nfactorial of a number =%d",fact);
        t=t->nxt;
    }
}
int display()
{
    t=head;
    while(t!=NULL)
    {
                  printf("%d\t",t->d);
                  t=t->nxt;
    }
}
void  mid()
{
    int i=0,j=0;
    t=head;
    p=head;
    while(t!=NULL)
    {
       
        if(i==(c/2))
        {
            if(c%2!=0){
            printf(" \nmid value of the node :%d",t->d);
            break;}
            else
            {
                j=0;
             
           
                while(p!=NULL)
                {
                    if(j==(i-1))
                   {
                       printf(" \nmid value of the node :%d",p->d);
                       printf(" \t%d",t->d);
                       break;
                   }
                    p=p->nxt;
                    j++;            
                }
               
            }
        }
        t=t->nxt;
       
        i++;
    }
}
void main()
{
     add_back(1);
     add_back(2);
     add_back(3);
     add_back(4);
     add_back(5);
     add_back(6);
     add_back(7);
     add_back(8);
        search(20);
     display();
     factorial();
     mid();
}