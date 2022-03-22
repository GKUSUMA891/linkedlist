//create 3 nodes using linked list
#include<stdio.h>
#include<stdlib.h>
void display();

struct node
{
  int data;
  struct node *next;
};
void display(struct node *ptr)
{
  while(ptr!=NULL)
  {
    printf("%d\t",ptr->data);
    ptr=ptr->next;
  }
}
struct node *head =NULL;
int main()
{
  struct node *temp1,*temp2,*temp3;
  printf("size of structure is:%d",sizeof(struct node));
    temp1=(struct node *)malloc(sizeof(struct node));
    temp1->data=100;
    temp1->next=NULL; 
    head=temp1;
    printf("address of temp1:%\n",&temp1);
    
    temp2=(struct node *)malloc(sizeof(struct node));
    temp2->data=200;
    temp2->next=NULL;
    temp1->next=temp2;
    printf("address of temp2:%p\n",&temp2);
    
    temp3=(struct node *)malloc(sizeof(struct node));
    temp3->data=300;
    temp3->next=NULL;
    temp2->next=temp3;
    printf("address of temp3:%p\n",&temp3);
    printf("elements in the linked list are:");
    display(head);
  
  return 0;
}
