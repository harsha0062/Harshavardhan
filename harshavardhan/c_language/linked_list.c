#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
};
typedef struct list node;
node *start=NULL,*newnode,*temp,*prev;
int i,n,count=0,p,o,h=0;
node* getnode()
{   printf("enter data:\n");
    newnode=(node *)malloc(sizeof(node));
    scanf("%d",&(newnode->data));
    newnode->next=NULL;
    return newnode;
    count++;
}
void insert_at_begin()
{
    printf("insert_at_begin:\n");
    newnode=getnode();
    if(start==NULL)
    start=newnode;
    else
    {
        newnode->next=start;
        start=newnode;
    }
}
void insert_at_end()
{
    printf("insert_at_end:\n");
    newnode=getnode();
    if(start==NULL)
    printf("error\n");
    else
    {
        temp=start;
        while ((temp->next)!=NULL)
            temp=temp->next;
        temp->next=newnode;
        
    }
}
void insert_at_mid()
{
    
    printf("insert_at_mid:\n");
    printf("enter the position:\n");
    scanf("%d",&p);
    if(p==0||p==count)
    printf("not a current current :\n");
    else
    {
        newnode=getnode();
        prev=temp=start;
        for(i=1;i<p;i++)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=newnode;
        newnode->next=temp;
    }
}

    void delete_at_begin()
    {
        
        printf("delete_at_begin:\n");
        if(start==NULL)
        printf("error\n");
        else
        {
            temp=start;
            start=temp->next;
            free(temp);
        }
        count--;
    }
    void delete_at_end()
    {
        printf("delete_at_end:\n");
        if(start==NULL)
        printf("error\n");
        else
        {
            temp=start;
            prev=start;
            while(temp->next!=NULL)
                prev=temp,temp=temp->next;
            prev->next=NULL;
            free(temp);
        }
        count--;
    }
    
void delete_at_mid()
{
    
    printf("delete_at_mid:\n");
    printf("enter the position:\n");
    scanf("%d",&p);
    if(p==1||p==count)
    printf("not a current current :\n");
    else
    {
        prev=temp=start;
        for(i=1;i<p;i++)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        temp->next=temp;
        free(temp);
    }
}
    void display()
    {
            printf("list display:\n");
        if(start==NULL)
        start=newnode;
        else
        {
            temp=start;
            while((temp)!=NULL)
            {
                printf("%d\t",temp->data);
                temp=temp->next;
            }

        }
        printf("\n");
    }
    
int main()
{
    printf("enter size of list :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=getnode();
        if(start==NULL)
        start=newnode;
        else
        {
            temp=start;
            while((temp->next)!=NULL)
            temp=temp->next;
            temp->next=newnode;
        }
    }
    
    while(h==0)
    {
        
        printf("1.insert_at_beg\n2.insert_at_end\n3.insert_at_mid\n4.delete_at_beg\n5.delete_at_end\n6.delete_at_mid\n7.display\n8.exit\nenter the choose:\n");
        scanf("%d",&o);
        switch (o)
        {
             case 1:     insert_at_begin(); break;
             case 2:     insert_at_end(); break;
             
             case 3:     insert_at_mid(); break;
             case 4:     delete_at_begin(); break;
             case 5:     delete_at_end(); break;
             case 6:     delete_at_mid(); break;
             case 7:    display(); break;
             case 8:     h=1;   
                         break;
             default:   
                         break;
        }
    }
    
}