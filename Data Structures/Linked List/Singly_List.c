#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define getnode (node*)malloc(sizeof(node))
typedef struct linked_list
	{
		int info;
		struct linked_list *next;

	}node;
	void create(node**);//We give ** to the address of address of head i.e address of first node
	void display(node*); //to get the value of any node
	void Search(node*,int);
	void count(node*);
	void sort(node*);
	void reverse(node**);
	void insert_begin(node**,int);
	void insert_end(node**,int);
	void insert_atposition(node**,int,int);
	void delete_begin(node**);
	void delete_end(node**);
	void delete_atposition(node**,int);
	void main()
	{
		node *head = NULL;
		int choice, search,item,node;
		while(choice!=0)
		{
			printf("0 Exit program\n");
			printf("1 Create new linked list\n");
			printf("2 Display new linked list\n");
			printf("3 Search an element linked list\n");
			printf("4 Count the element linked list\n");
			printf("5 Sort linked list\n");
			printf("6 Reverse of a linked list\n");
			printf("7 Insert at beginning of a linked list\n");
			printf("8 Insert at the end of a linked list\n");
			printf("9 Insert at any position of a linked list\n");
			printf("10 Delete at begining\n");
			printf("11 Delete at end\n");
			printf("12 Delete at any position of a linked list\n");
			printf("\nEnter your choice: ");
			scanf("%d",&choice);
			switch(choice)
			{
				case 0: printf("Good Bye");
						exit(1);
						break;
						
				case 1: create(&head);
						break;
						
				case 2: display(head);
						break;
						
				case 3: printf("Enter the search element: ");
						scanf("%d", &search); 
						Search(head, search);
						break;
						
				case 4: count(head);
						break;
						
				case 5: sort(head);
						break;
				case 6: reverse(&head);
						break;
						
				case 7: printf("Enter the element to be inserted: ");
						scanf("%d",&item); 
						insert_begin(&head,item);
						break;
						
				case 8: printf("Enter the element to be inserted: ");
						scanf("%d",&item); 
						insert_end(&head,item);
						break;
						
				case 9:	printf("Enter the position where the element is to be inserted: ");
						scanf("%d",&node);
						printf("Enter the element to be inserted: ");
						scanf("%d",&item); 
						insert_atposition(&head,item,node);
						break;
						
				case 10:delete_begin(&head);
						break;
						
				case 11:delete_end(&head);
						break;
						
				case 12:printf("Enter the position from where the element has to be deleted:");
						scanf("%d",&node);
						delete_atposition(&head,node);
						break;
									
				default: printf("Please Enter a valid choice :\n");		
			}
		 } 
		 getch();
	}
	
	void create( node **head)//**head = &head; like double pointer?
	{
		int i = 1, choice=1, item;
		node *ptr = getnode;
		*head = NULL;// initialze head with null
		while(choice!=0){
			if(*head == NULL){
				*head = ptr;
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
	
	void display(node *head){//*head = head;address copy?
		printf("Linked List Element:\n");
		if(head == NULL){
			printf("No element to display\n");
		}
		while(head!=NULL){
			printf("%d\t", head->info);
			head=head->next;
		}
	}
	void Search(node *head ,int item)
	{
		int i = 0;
		while(head!=NULL)
		{
			i++;
			if(head->info == item)
			{
				printf("%d exists at position %d",item,i);
				return;
			}
			head = head->next;
		}
		printf("%d does not exists",item);
	}

	void count(node *head)
	{
		int i = 0;
		while(head!=NULL)
		{
			i++;
			head = head->next;
		}
		printf("Number of elements = %d",i);
			
	}
	void sort(node *head)
	{
	node *i;
	int temp,n=0;
	for(i= head; i!=NULL; i=i->next)
	{
		n++;
	}
	for(;n>0;n--)
		for(i= head; i->next!=NULL; i=i->next)

			if(i->info > i->next->info)
			{
				temp = i->info;
				i->info = i->next->info;
				i->next->info = temp;
			}
		}
	void reverse(node **head)
	{
		node *curr, *prev, *next;
		curr = *head;
		next=curr->next;
		prev = NULL;
		curr->next =NULL;
		while(next!= NULL)
		{
			prev = curr;
			curr = next;
			next = curr->next;
			curr->next= prev;

		}	 
		*head = curr;
	}
	void insert_begin(node **head, int item)
{
	node *ptr;
	ptr = getnode;//does it returns an address : yes ptr points to node being created
	ptr->info= item;
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
void insert_end(node **head, int item)
{
	node *ptr,*loc;
	ptr = getnode;
	ptr->info= item;
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
void insert_atposition(node **head, int item, int pos)
{
	node *ptr,*loc = *head;
	int i=1;
	ptr = getnode;
	ptr->info= item;
	if(*head == NULL)
	printf("The List  is empty\n");
	else if(pos==1)
	{
		if(*head == NULL)
		{
			ptr->next = NULL;
		}
		else
		{
			ptr->next = *head;
			*head = ptr;
		}
	}
	else
	{
		while(i!=(pos-1)&&loc!=NULL)
	{
		loc=loc->next;
		i++;
	}
		if(loc == NULL)
		printf("Enter a valid position,new element not inserted\n");
		else
		{
			ptr->next=loc->next;
			loc->next=ptr;
		}
		
	}

}
void delete_begin(node **head)
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
void delete_end(node **head)
{
	node *ptr, *loc;
	if(*head == NULL)
	printf("Nothing to delete\n");
	else if((*head)->next==NULL)//for one node??
	{
		ptr= *head;
		*head=NULL;
		free(ptr);
	}
	else{
		loc=*head;
		ptr=loc->next;
		while(ptr->next!=NULL)
		{
			loc=ptr;
			ptr=ptr->next;
		}
		loc->next=NULL;
		free(ptr);
	}

}
void delete_atposition(node **head, int pos)
{
	node *ptr, *loc;
	int i=1;
	loc = *head;
	while(i<(pos-1))
	{
	  loc=loc->next;
	  i++;
	}
	if(*head == NULL)
	  printf("Nothing to delete");
	else if(pos==1)
	{
	  ptr= *head;
	  *head=ptr->next;
	  free(ptr);
	}
	else
	{
	  ptr=loc->next;
	  loc->next=ptr->next;
	  free(ptr);
	}
}




/*
polynomiaL ADDITION
stack using linked list
queue using linked list
union, intersection
merging
concatination*/

/*L1  P1 P2 P3 P4 P5

L2  Q1 Q2 Q3 Q4 Q5

L3  P1 Q1 P2 Q2 P3 Q3 P4 Q4 P5 Q5

L4  P1 Q5 P2 Q4 P3 Q3 P4 Q2 P5 Q1


L1 = 56 32 21 12 9

L2= 12 34  56 78 90 

merge
12 34  56 78 90 56 32 21 12 9

print without repeat
12 34 56 78 90 32 21 9

if the value reapeat then print the value*/
    
