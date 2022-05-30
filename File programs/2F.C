#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define SIZE 320000//Is this required?
int main()
{

	int i = 0, j, n = 0, min, index;
	 int arr[SIZE];
	int temp;
	FILE* fptr;
	fptr = fopen("random.txt", "r");
	while (fscanf(fptr, "%d", &arr[i]) != EOF)
	{
		n++;
		i++;
	}

	// logic for selection sort....
	for (i = 0; i < n - 1; i++) {
		min = arr[i];
		for (j = i + 1; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				index = j;
			}
		}
		 temp = arr[i];
		arr[i] = min;
		arr[index] = temp;
	}
	// selection sort logic ends here..

	// save the sorted array...
	fptr = fopen("random2.txt", "w");
	for (i = 0; i < n; i++)
	{
		fprintf(fptr, "%d ", arr[i]);
		//printf("%d ", arr[i]);
	}
	printf("Sorting Complete..\nPlease Check Your File.");
	fclose(fptr);
	getch();
	return 0;
}
