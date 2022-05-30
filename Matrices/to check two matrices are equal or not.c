#include<stdio.h>
#define n 4

// This function returns 1 if A[][] and B[][] are identical
// otherwise returns 0
    int main(){
    	
    	int i, j, row1, row2, col1, col2, flag=1;
			int a[n][n], b[n][n];
        printf("Enter the order of the matrix A: \n");
        scanf("%d %d", &row1, &col1);

        printf("Enter the order of the matrix B: \n");
        scanf("%d %d", &row2, &col2);
        
        printf("Enter the elements of matrix A:  \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++) 
            {
                scanf("%d", &a[i][j]);
            }
        }
        
        printf("Enter the elements of matrix B:  \n");
        for (i = 0; i < row2; i++) 
        {
            for (j = 0; j < col2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        
        printf("MATRIX A is: \n");

        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++) 
            {
                printf("%3d", a[i][j]);
            }
           printf("\n");
        }
        
        printf("MATRIX B is: \n");

        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++) 
            {
                printf("%3d", b[i][j]);
            }
            printf("\n");
        }
        
                if (row1 == row2 && col1 == col2)

        {

            printf("Matrices can be compared \n");

            for (i = 0; i < row1; i++) 

            {

                for (j = 0; j < col2; j++)

                {

                    if (a[i][j] != b[i][j])

                    {

                        flag = 0;

                        break;

                    }

                 }

            }

        }

 

        else 

        {

            printf("Cannot be compared\n");

            exit(1);

        }

 

        if (flag == 1)

            printf("Two matrices are equal \n");

        else

            printf("But, two matrices are not equal \n");

 

    }
    
