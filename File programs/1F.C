#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	// This program will create random numbers on every program run
	FILE *fptr;
	int num,i;
	//Please generate the number within 32000
	printf("How Many number Do you want to generate: ");
	scanf("%d",&num);

	// creating a file "random.txt" in "write" mode
	fptr = fopen("random.txt", "w");

	if (fptr == NULL) {

		printf("ERROR");
		exit(1);
	}

	for (i = 0; i < num; i++) {

		// to generate number less than 100000
		int val = rand() % num;

		// storing data to file
		fprintf(fptr, "%d ", val);
	}

	// closing the file
	fclose(fptr);
	printf("numbers generated successfully...!!\nPlease Check your file.. ");
	getch();
	return 0;
}
