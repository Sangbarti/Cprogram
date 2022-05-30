#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define getnode (node*)malloc(sizeof(node))
typedef struct linked_list
{
	struct linked_list *prev;
	int data;
	struct linked_list *next;
}node;
void create(node**);
void display(node*);
void count(node*);
/*void reverse(node**);
void sort(node*);
void search(node*,int);
void insert_beg(node**,int);
void insert_end(node**,int);
void insert_at_pos(node**,int,int);
void delete_begin(node**);
void delete_end(node**);
void delete_at_pos(node**);*/
void main()
{
	node *head = NULL;
	int choice,search,item,pos;
	while(choice!=0)
	{
		printf("0 Exit Program\n");
		printf("1 Create a doubly linked list");
		printf("2 Display a doubly linked list\n");
		printf("3 Count the number of nodes present in a doubly linked list\n");
		printf("4 Reverse a doubly lnked list\n");
		printf("5 Sort a doubly linked list\n");
		printf("6 Search an element in a doubly linked list\n");
		printf("7 Insert a node at the beginning\n");
		printf("8 Insert a node at the end\n");
		printf("9 Insert a node at any position\n");
		printf("10 Delete a node at beginning\n");
		printf("11 Delete at the end\n");
		printf("12 Delete at position\n");
		printf("\nEnter your Choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0: printf("Goodbye");
					exit(1);
					break;
					
			case 1: create(&head);
					break;
					
			case 2: display(head);
					break;
					
			case 3: count(head);
					break;
			
			/*case 4: reverse(&head);
					break;
					
			case 5: sort(head);
					break;
					
			case 6: printf("Enter the element to be searched ");
					scanf("%d",&search);
					search(head,search);
					
			case 7: printf("Enter the element to be inserted at the beginning ");
					scanf("%d",&item);
					insert_beg(&head,item);
					brreak;
					
			case 8: printf("Enter the element to be inserted at the end ");
					scanf("%d",&item);
					insert_end(&head,item);
					break;
					
			case 9: printf("Enter the position where the element is to be inserted ");
					scanf("%d",&pos);
					printf("Enter the element to be inserted ");
					scanf("%d",&item);
					insert_at_pos(&head,pos,item);
					break;
					
			case 10: delete_beg(&head);
					break;
					
			case 11: delete_end(&head);
					break;
					
			case 12: printf("Enter the position from where the element is to be deleted ");
					scanf("%d",&pos);
					delete_at_pos(&head,pos);
					break;*/
					
			default: printf("Please enter correct choice ");
							
		}
	}
	getch();
}
void create(node **head)
{
	node *ptr;
	int i=1,choice = 1;
	ptr = getnode;
	ptr->next = NULL;
	*head = NULL;
	*head = ptr;
	if(*head == NULL)
	{
		ptr->prev = NULL;
		
	}
	else
	{
		ptr->next = getnode;
		ptr = ptr->next;
		*head->next = ptr->prev;
		*head = *head->next;
	}
	while(choice!=0)
	{
		printf("Enter the value of %d node ",i++);
		scanf("%d",&item);
		ptr->data = item;
		ptr->next = NULL;
		printf("Press 0 to exit or else to continue ");
		scanf("%d",&choice);
		
	}
	
}
void display(node *head)
{
	printf("The doubly linked list is displayed as\n");
	if(head == NULL)
		printf("Nothing to display ");
		
	else
	{
		while(head!=NULL)
		{
			printf("%d\t",head->data);
			head = head->next;
		}
	}
}
void count(head)
{
	int i = 0;
	while(head!=NULL)
	{
		i++;
		head = head->next;
	}
	printf("The number of nodes in the linked list is %d",i);
}
