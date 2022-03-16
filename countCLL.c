//count the nodes in CLL
#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>      
struct node
{  
    int data;  
    struct node *next; 
};  
   
int count = 0;  
struct node *head=NULL;  
struct node *temp=NULL;  
void add(int data)
{  
    struct node *newNode=(struct node*)malloc(sizeof(struct node));  
    newNode->data=data;  
    if(head == NULL)
	{  
        head=newNode;  
        temp=newNode;  
        newNode->next=head;  
    }
	else 
	{   
        temp->next=newNode;  
        temp=newNode;  
        temp->next=head;  
    }  
}  
void countNodes() 
{  
    struct node *current=head;  
    do
	{  
        count++;  
        current=current->next;  
    }while(current != head);  
    printf("Count of nodes in circular linked list: %d",count);  
}  
      
int main()  
{  
    add(1);  
    add(2);  
    add(4);  
    add(1);  
    add(2);  
    add(3);  
   countNodes();     
   return count;  
}  
