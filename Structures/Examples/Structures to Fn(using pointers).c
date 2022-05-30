#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

/* function declaration */
void printBook( struct Books *book );
int main( ) {

   struct Books B1;        /* Declare Book1 of type Book */
   struct Books B2;        /* Declare Book2 of type Book */
 
   strcpy( B1.title, "C Programming");
   strcpy( B1.author, "Nuha Ali"); 
   strcpy( B1.subject, "C Programming Tutorial");
   B1.book_id = 6495407;

   strcpy( B2.title, "Telecom Billing");
   strcpy( B2.author, "Zara Ali");
   strcpy( B2.subject, "Telecom Billing Tutorial");
   B2.book_id = 6495700;
 
   printBook( &B1 );
   printBook( &B2 );
   return 0;
}

void printBook( struct Books *book ) {

   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
}