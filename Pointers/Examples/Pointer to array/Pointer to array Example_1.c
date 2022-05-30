#include<stdio.h>
int main()
{
	int gradeList[8] = {92,85,75,88,79,54,34,96};
	int *myGrades = gradeList;
	printf("%d\n",*myGrades);
	printf("%d\n",gradeList[1]);
	printf("%d",*(myGrades + 1));
	return 0;
}
