#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define getnode (node*)malloc(sizeof(node))
typedef struct stack
	{
		int data;
		struct stack *next;

	}node;
	
	void push(node**,int);
	void pop(node**);
	void display(node*);
	void main()
	{
		node *head = NULL;
		int data,choice = 1;
		while(choice!=0)
		{
			printf("\n0 Exit program\n");
			printf("1. Insert elements into the stack: \n");
			printf("2. Display elements from the stack: ");
			printf("3. Delete elements from the stack: ");
			printf("Enter your choice");
			scanf("%d",&choice);
			switch(choice)
			{
				case 0: printf("Good Bye");
						exit(1);
						break;
						
				case 1: printf("Enter the element to be inserted in the stack ");
						scanf("%d",&data); 
						push(&head,data);
						break;
						
				case 2: display(head);
						break;
						
				case 3: pop(&head);
						break;
						
				default: printf("Please Enter a valid choice :\n");
			}
		}
		getch();
		
	}
	void push(node **head, int item)
{
	node *ptr;
	ptr = getnode;//does it returns an address : yes ptr points to node being created
	ptr->data= item;
	if(*head == NULL)// initialy empty
	{
		*head = ptr;
		ptr->next= NULL;
	}
	else{
		ptr->next =*head;
		*head= ptr;
	}	
}
void pop(node **head)
{
	node *ptr;
	if(*head == NULL)
	printf("Nothing to delete");
	else{
		ptr = *head;
		*head = ptr->next;// but not with *head = *head->next; why??
		printf("Element popped out is %d",ptr->data);
		free(ptr);
	}

}
	void display(node *head){
		printf("The stack is displayed as :\n");
		if(head == NULL){
			printf("No element to display\n");
		}
		while(head!=NULL){
			printf("%d\t", head->data);
			head=head->next;
		}
	}

