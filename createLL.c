//creating a node in single Linked List
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;   //creating pointer by using SRS
};
 int main()
 {
  struct node *head=NULL;//creating node
  head=(struct node*)malloc(sizeof(struct node));//allocate memory in dynamically
  head->data=25;        //accessing data
  //printf("enter data"); //accessing data by user
  //scanf("%p\n ",&head->data);
  head->link=NULL;     //accessing next node address
  printf(" first node is:%d\n",head->data);
  printf(" first node address is:%p\n",&head->data);
   
   
   struct node *temp1=NULL; //creating node
   temp1=(struct node*)malloc(sizeof(struct node));
   temp1->data=30;    //accessing data
   head->link=temp1;  //accessing next node address
   printf("second node is:%d\n",temp1->data);
    printf(" second node address is%p\n",&temp1->data);
    
    struct node *temp2=NULL;
    temp2=(struct node*)malloc(sizeof(struct node));
    temp2->data=35;    //accessing data
    temp1->link=temp2;   //accessing next node address
     printf(" third node is:%d\n",temp2->data);
      printf(" third node address is%p\n",&temp2->data);
    return 0;
    
}

