#include <stdio.h>
#include <stdlib.h>

typedef struct stu
{
    int data;
    struct stu *link; 
}node;

node *head=NULL;

void create_node();
void Update_nth_node(int,int);
void Display();

int main()
{
    int x,n,pos;
    while(1)
    {
        printf("\n1.CreateNode\n2.Update the data nth position\n3.Display\n0.exit\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1: create_node();
                    break;
            case 2:
                    printf("Enter a position to update the node: ");
                    scanf("%d",&pos);
                    printf("Enter a data: ");
                    scanf("%d",&n);
                    Update_nth_node(pos,n);
                    break;
            case 3: Display();
                    break;
            default: goto EXIT;
        }
    }
    EXIT: printf("Thank you for visiting!!!\n");
    return 0;
}


void create_node()
{
    node *new,*temp=NULL;
    int i,len;
    printf("Enter the length of the linked list: \n");
    scanf("%d",&len);
    for(i=1;i<=len;i++)
    {
        new=(node *)malloc(sizeof(node));
        printf("Enter elements in a list: ");
        scanf("%d",&new->data);
        new->link=NULL;
        if(head==NULL)
        {
            head=temp=new;
        }
        else
        {
            temp->link=new;
            temp=new;
        }
    }
}


void Update_nth_node(int pos,int n)
{
    node *temp=NULL;
    temp=head;
    int i=1;
    while(i<pos)
    {
        temp=temp->link;
        i++;
    }
    temp->data=n;
}


void Display()
{
    node *ptr=NULL;
    ptr=head;
    if(ptr==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->link;
        }
    }
}
