//Perform multiplication of two matrices
#include<stdio.h>
int main(void)
{
	int A[20][20], B[20][20], C[20][20], i, j, k, rows, cols;
	printf("Enter the number of Rows:");
	scanf("%d",&rows);
	printf("\nEnter the number of Columns:");
	scanf("%d",&cols);
	//Reading A[rows][cols]
	printf("\nEnter values for A[%d][%d]:", rows, cols);
	for(i=0;i<rows;i++)
	    for(j=0;j<cols;j++)
	        scanf("%d",&A[i][j]);
	        
	//Reading B[rows][cols]
	printf("Enter values for B[%d][%d]:", rows, cols);
	for(i=0;i<rows;i++)
	    for(j=0;j<cols;j++)
	        scanf("%d",&B[i][j]);
	        
	//Perform multiplication
	for(i=0;i<rows;i++)
	    for(j=0;j<cols;j++)
	    {
	    	C[i][j] = 0;
	    	for(k=0;k<cols;k++)
	    	    C[i][j] = C[i][j]+A[i][k]*B[k][j];
		}
	        
	//Display the Resultant matrix
	printf("\nResultant Matrix C[%d][%d]:\n", rows, cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		    printf("%d", C[i][j]);
		printf("\n");
	}
	
}