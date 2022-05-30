#include<stdio.h>
typedef struct Employee 
{
	char name[10];
	int id;
	int sal;
 } emp;
 int main()
 {
 	emp  e1, e2,e3;
 	strcpy(e1.name,"TOM");
 	e1.id = 1234;
 	e1.sal = 1200;
	e2 = {"Ram", 2345, 2300};
 	//e3 ={"Harry",.sal = 4500,.id = 4567};//designated initialization
 	printf("Details of employee 1\n");
 	printf("Name = %s\t ID = %d\t Salary = %d\n",e1.name, e1.id, e1.sal);
 	printf("Name = %s\t ID = %d\t Salary = %d\n",e2.name, e2.id, e2.sal);
 	//printf("Name = %s\t",e3.s,"ID = %d\t",e3.id,"Salary = %d\n",e3.sal);
 	return 0;
 }
