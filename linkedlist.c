//Create a linked list , print the list and search an element in a linnked list
#include<stdio.h>
#include<stdlib.h>

#define NODE_SIZE 5
typedef struct node
{
int data;
struct node *link;
}s;
s *head = NULL;

void insert(int data)
{
	s *new=malloc(sizeof(s));
	if(new==NULL)
	{
		printf("Memory is not available\n");
	}
	else
	{
		new->data=10;
		new->link=NULL;
		if(head==NULL)
		{
			head=new;
		}
		else
		{
			s *temp=head;
			while(temp->link != NULL)
			{
				temp=temp->link;
			}
			temp->link=new;
		}
	}
	new->data=data;
	new->link=NULL;
}

void display()
{
	s *temp=head;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(temp != NULL) // go till the last node, to print the data
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
		printf("\n");
	}
}

int search(int element)
{
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		s *temp=head;
		while(temp!=NULL)
		{
			if(temp->data==element)
			{
				printf("element is found\n");
				return 0;
			}
			else
			{
				temp=temp->link;
			}
		
		}
		printf("element is not found\n");
	}
}

int main()
{
	int data,i=0;
	for(i=0;i<NODE_SIZE;i++)
	{
		printf("Enter the data:");
		scanf("%d",&data);
		insert(data);
	}
	printf("Linked list is created.\nThe data is:");
	display();
	int ele;
	printf("Enter the element to be searched:");
	scanf("%d",&ele);
	search(ele);
	return 0;
}

