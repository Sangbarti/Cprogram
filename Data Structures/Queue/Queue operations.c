#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define getnode (node*)malloc(sizeof(node))
typedef struct Queue
	{
		int data;
		struct Queue *next;

	}node;
	void Insertion(node**,int);
	void Deletion(node**);
	void display(node*);
	void main()
	{
		node *head = NULL;
		int data,choice = 1;
		while(choice!=0)
		{
			printf("\n0. Exit program\n");
			printf(" 1.Insert elements into the queue\n");
			printf(" 2.Display elements of the queue\n");
			printf(" 3.Delete elements from the queue");
			printf("\nEnter your choice");
			scanf("%d",&choice);
			switch(choice)
			{
				/*case 0: printf("Good Bye");
						exit(1);
						break;*/
						
				case 1: printf("Enter the element to be inserted in the queue ");
						scanf("%d",&data); 
						Insertion(&head,data);
						break;
						
				case 2: display(head);
						break;
						
				case 3: Deletion(&head);
						break;
						
				default: printf("Please Enter a valid choice :\n");
			}
		}
		getch();
		
	}
	void Insertion(node **head, int item)
{
	node *ptr,*loc;
	ptr = getnode;
	ptr->data= item;
	ptr->next= NULL;
	if(*head == NULL)
	   *head = ptr;
	else{

		loc= *head;
		while(loc->next!= NULL)
		{
		    loc =loc->next;
		}
	     
		loc->next = ptr; 
		}
}
void Deletion(node **head)
{
	node *ptr;
	if(*head == NULL)
	printf("Nothing to delete");
	else{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
		
		
	}
}
	void display(node *head){
		printf("Queue Elements:\n");
		if(head == NULL){
			printf("No element to display\n");
		}
		while(head!=NULL){
			printf("%d\t", head->data);
			head=head->next;
		}
	}
