#include<stdio.h>
#include<string.h>
typedef struct Books 
{
	char title[50],author[50],subject[100];
	int book_id;
}B;
void printBook(B *Book);
int main()
{
	B b1,b2;
	strcpy(b1.subject,	"C Programming tutorial");
	strcpy(b1.title,	"C Programming");
	strcpy(b1.author,	"Nuha Ali");
	b1.book_id = 6495407;
	
	strcpy(b2.subject,	"Telecom Billing tutorial");
	strcpy(b2.title,	"Telecom Billing");
	strcpy(b2.author,	"Zara Ali");
	b2.book_id = 6495700;
	printBook(&b1);
	printBook(&b2);
	return 0;
}
void printBook(B *book)
{
	printf("Book Title : %s\n",book->title);
	printf("Book Author : %s\n",book->author);
	printf("Book Subject : %s\n",book->subject);
	printf("Book book_id : %d\n",book->book_id);
}
