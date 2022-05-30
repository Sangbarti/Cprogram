#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int sno;
	char sname[30];
	float marks;
	char temp;
};
int main()
{
	struct Student s[60];
	int i;
	FILE *fp;
	fp = fopen("student1.txt","w");
	for(i=0;i<2;i++){
		printf("Enter the student Details %d\n", i+1);
		printf("Student Number: ");
		scanf("%d",&s[i].sno);
      	scanf("%c",&s[i].temp);

		printf("Student Name: ");
		gets(s[i].sname);
	
		printf("Student marks: ");
		scanf("%f",&s[i].marks);
      fwrite(&s[i], sizeof(s[i]),1,fp); //fwrite( & structure variable , size of structure variable, no of records, file pointer);
	}
	
	fclose(fp);
	
	fp = fopen("student1.txt","r");
	for(i=0;i<2;i++){
		printf("Details of students %d are\n", i+1);
		fread (&s[i], sizeof (s[i]) ,1,fp); //fread( & structure variable, size of (structure variable), no of records, file pointer);
		printf("Student Number = %d\n",s[i].sno);
		printf("Student name = %s\n",s[i].sname);
		printf("marks = %f\n",s[i].marks);
	}
	fclose(fp);
	return 0;
}
