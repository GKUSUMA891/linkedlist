//delete N nodes after M nodes of a linked list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
void push(struct Node ** head_ref, int new_data)//Function to insert a node at the beg
{

	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));//allocate node
	new_node->data = new_data;
	new_node->next = (*head_ref);//link the old list off the new node

	(*head_ref) = new_node;//head is point to new node
}

void printList(struct Node *head)//Fun to print linked list
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void skipMdeleteN(struct Node *head, int M, int N)//Fun to skip M nodes & then delete N nodes in ll
{
	struct Node *curr = head, *t;
	int count;

	while (curr)//traverses the whole list
	{
	
		for (count = 1; count<M && curr!= NULL; count++)	// Skip M nodes
			curr = curr->next;

		// If we reached end of list, then return
		if (curr == NULL)
			return;

		// Start from next node and delete N nodes
		t = curr->next;
		for (count = 1; count<=N && t!= NULL; count++)
		{
			struct Node *temp = t;
			t = t->next;
			free(temp);
		}
		curr->next = t; // Link the previous list with remaining nodes

		// Set current pointer for next iteration
		curr = t;
	}
}
int main()
{
	//Create following linked list
	//1->2->3->4->5->6->7->8->9->10
	struct Node* head = NULL;
	int M=2, N=3;
	push(&head, 10);
	push(&head, 9);
	push(&head, 8);
	push(&head, 7);
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	printf("M = %d, N = %d \nGiven Linked list is :\n", M, N);
	printList(head);

	skipMdeleteN(head, M, N);

	printf("\nLinked list after deletion is :\n");
	printList(head);

	return 0;
}
