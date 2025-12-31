//Addition of two matrices
#include<stdio.h>
int main(void)
{
	int A[3][2], B[3][2], C[3][2], i, j;
	//Reading matrix-A
	printf("Enter values for A[3][2] matrix:\n");
	for(i=0;i<3;i++)
	    for(j=0;j<2;j++)
	        scanf("%d",&A[i][j]);
	//Reading matrix-B
	printf("Enter values for B[3][2] matrix:\n");
	for(i=0;i<3;i++)
	    for(j=0;j<2;j++)
	        scanf("%d",&B[i][j]);
	//Perform the Addition
	for(i=0;i<3;i++)
	    for(j=0;j<2;j++)
	       C[i][j] = A[i][j]+B[i][j];
    //Printing the Resultant Matrix matrix -c
    printf("\nResultant matrix matrix-C[3][2]:\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<2;j++)
    	    printf("%d",C[i][j]);
    	printf("\n");
	}
}