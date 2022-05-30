#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define getnode (node*)malloc(sizeof(node))
typedef struct linked_list
	{
		int info;
		struct linked_list *next;

	}node;
	void create1(node**);
	void create2(node**);
	void display1(node*); 	
	void display2(node*);
	void merge(node**,node**);
	void uni(node**,node**);
	void intersection(node**,node**);

void main()
{
	node *head1 = NULL, *head2 = NULL;
	int choice = 1;
	while(choice!=0)
	{
		
		printf("\n 0 Exit program");
		printf("\n 1 Create linked list_1\n");
		printf("2 Create linkded list_2\n");
		printf("3 Display linked list_1\n");
		printf("4 Display linked list_2\n");
		printf("5 Merge a linked list\n");
		printf("6 Display union of a linked list\n");
		printf("7 Display intersection of a linked list\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			/*case 0 : printf("Good Bye");
					exit(1);
					break;*/
					
			case 1: create1(&head1);
					break;
					
			case 2 : create2(&head2);
					break;
					
			case 3: display1(head1);
					break;
					
			case 4: display2(head2);
					break;
							
			case 5: merge(&head1,&head2);
					break;
					
			case 6: uni(&head1,&head2);
					break;
					
			case 7: intersection(&head1,&head2);
					break;
					
			default: printf("Please enter a valid choice\n ");
					
		}
	}
	getch();
}



void create1(node **head1)//**head = &head; like double pointer?
	{
		int i = 1, choice=1, item;
		node *ptr = getnode;
		*head1 = NULL;// initialze head with null
		while(choice!=0){
			if(*head1 == NULL){
				*head1 = ptr;
			}
			else{
				ptr->next=getnode;
				ptr= ptr->next;
			}
			
			printf("Enter the value for NODE %d :", i++);
			scanf("%d",&item);
			ptr->info=item;
			ptr->next=NULL;
			printf("press '0' to quit else continue: ");
			scanf("%d",&choice);
		}
		
	}
	
	void display1(node *head1){//*head = head;address copy?
		printf("Linked List Element:\n");
		if(head1 == NULL){
			printf("No element to display\n");
		}
		while(head1!=NULL){
			printf("%d\t", head1->info);
			head1=head1->next;
		}
	}
/*void create1(node **head1)
{
	int choice,i=1,item;
	node *ptr1;
	*head1 = NULL;
	ptr1 = getnode;
	while(choice!=0)
	{
		if(*head1 == NULL)
			*head1 = ptr1;
		else
		{
			ptr1->next = getnode;
			ptr1 = ptr1->next;
		}
		printf("Enter the value for NODE %d",i++);
		scanf("%d",&item);
		ptr1->data = item;
		ptr1->next = NULL;
		printf("Press 0 to exit else continue ");
		scanf("%d",&choice);
	}
}*/
/*void create2(node**head2)
{
	int choice,i=1,item;
	node *ptr2;
	*head2 = NULl;
	ptr2 = getnode;
	while(choice!=0)
	{
		if(*head2 == NULL)
			*head2 = ptr2;
		else
		{
			ptr2->next = getnode;
			ptr2 = ptr2->next;
		}
		printf("Enter the value for NODE %d",i++);
		scanf("%d",&item);
		ptr2->data = item;
		ptr2->next = NULL;
		printf("Press 0 to exit else continue ");
		scanf("%d",&choice);
	}
}*/
void create2(node **head2)//**head = &head; like double pointer?
	{
		int i = 1, choice=1, item;
		node *ptr = getnode;
		*head2 = NULL;// initialze head with null
		while(choice!=0){
			if(*head2 == NULL){
				*head2 = ptr;
			}
			else{
				ptr->next=getnode;
				ptr= ptr->next;
			}
			
			printf("Enter the value for NODE %d :", i++);
			scanf("%d",&item);
			ptr->info=item;
			ptr->next=NULL;
			printf("press '0' to quit else continue: ");
			scanf("%d",&choice);
		}
		
	}
	
	void display2(node *head2){//*head = head;address copy?
		printf("Linked List Element:\n");
		if(head2 == NULL){
			printf("No element to display\n");
		}
		while(head2!=NULL){
			printf("%d\t", head2->info);
			head2=head2->next;
		}
	}

/*void display1(node *head1)
{
	printf("The linked list elements are displayed as\n");
	if(head1 == NULL)
		printf("Nothing to display\n");
	while(head1!=NULL)
	{
		printf("%d\t",head1->data);
		head1 = head1->next;
		
	}
}*/

/*void display2(node *head2)
{
	printf("The linked list elements are displayed as\n ");
	if(head2 == NULL)
		printf("Nothing to display\n");
	while(head2!=NULL)
	{
		printf("%d\t",head2->data);
		head2 = head2->next;
		
	}
}*/

void merge(node **head1,node **head2)
{
	node *first, *second, *ptr = NULL;
	first = *head1;
	second = *head2;
	ptr= getnode;
	
	ptr->info = first->info;
	ptr->next = NULL;
	first=first->next;

	while(first!=NULL)
	{

		ptr->next = getnode;
		ptr = ptr->next;
		ptr->info = first->info;
		printf("%d\t",ptr->info);
		ptr->next = NULL;
		first = first->next;

	}

	while(second!=NULL)
	{

		ptr->next = getnode;
		ptr = ptr->next;
		ptr->info = second->info;
		printf("%d\t",ptr->info);
		ptr->next = NULL;
		second = second->next;

	}
	
}
void uni(node **head1,node **head2)
{
	//node *loc1 =NULL,*loc = NULL;
	node *first, *second, *ptr = NULL;
	first = *head1;
	second = *head2;
	ptr= getnode;
	//for(loc = head1; loc->next!=NULL; loc = loc->next)
		//printf("%d\t",loc->info);
		while(first!=NULL)
	{

		ptr->next = getnode;
		ptr = ptr->next;
		ptr->info = first->info;
		printf("%d\t",ptr->info);
		ptr->next = NULL;
		first = first->next;

	}
	while(first!= NULL&&second!=NULL)
	{
		if(first->info != second->info)
		{
		ptr->next = getnode;
		ptr = ptr->next;
		ptr->info = second->info;
		printf("%d\t",ptr->info);
		ptr->next = NULL;
		}
	else
		break;
	

	/*for(loc = head1; loc->next!=NULL; loc = loc->next)
	{
		for(loc1 = head2; loc1->next; loc1 = loc1->next)
		{
				if(loc->info!=loc1->info)
					printf("%d\t",loc1->info);
		}
	
			
	}*/
	second = second->next;
	first = first->next;
	}
	
}
void intersection(node **head1,node **head2)
{
	node *first, *second, *ptr = NULL;
	first = *head1;
	second = *head2;
	ptr= getnode;
	while(first!= NULL&&second!=NULL)
	{
		if(first->info == second->info)
		{
		ptr->next = getnode;
		ptr = ptr->next;
		ptr->info = second->info;
		printf("%d\t",ptr->info);
		ptr->next = NULL;
		}
	else
		break;
	
	/*node *loc1 = NULL,*loc = NULL;
	for(loc = head1; loc->next!=NULL; loc = loc->next)
	{
		for(loc1 = head2; loc1->next; loc1 = loc1->next)
		{
				if(loc->info == loc1->info)
					printf("%d\t",loc->info);
		}
	
			
	}*/
	second = second->next;
	first = first->next;
	}
	
}



