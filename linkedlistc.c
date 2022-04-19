#include <string.h>  
#include <stdlib.h>  
struct node
{  
    int data;  
    struct node *next;  
};  

struct node *head = NULL;  
struct node *tail = NULL;  
     
void add(int data)
{  
    struct node newNode = (struct node)malloc(sizeof(struct node)); // allocate data in heap   
    newNode->data = data;  
    if(head == NULL)
	{  
        head = newNode;  
        tail = newNode;  
        newNode->next = head;  
    }
	else
	 {  
        tail->next = newNode;   
        tail = newNode;  
        tail->next = head;  
    }  
}  
void display()
{  
    struct node *current = head;  
    if(head == NULL)
	{  
        printf("List is nothing");  
    }  
    else
	{  
        printf("Nodes of the circular linked list: \n");  
         do
		 {  
            printf("%d ", current->data);  
            current = current->next;  
        }
        while(current != head);  
        printf("\n");  
    }  
}  
      
int main()  
{   
   add(100);  
   add(200);  
   add(300);  
   add(400); 
   add(500);
   display();  
   return 0;  
}
