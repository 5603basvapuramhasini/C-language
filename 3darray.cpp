//Finding Minimum & Maximum in a Three-Dimensional Array
#include<stdio.h>
int main(void)
{
	int arr[3][2][3], i, j, k, min, max; 
	printf("Enter values for arr[3][2][3]:");
	for(i=0;i<3;i++)
    	for(j=0;j<2;j++)
    	    for(k=0;k<3;k++)
	        scanf("%d",&arr[i][j][k]);
	//Finding minimum & maximum
    min=max=arr[0][0][0];
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            for(k=0;k<3;k++)
        {
        	if(min>arr[i][j][k]) min=arr[i][j][k];
        	if(max<arr[i][j][k]) max=arr[i][j][k];
		}
	printf("\nMinimum in arr[3][2][3]: %d", min);
	printf("\nMaximum in arr[4][2][3]: %d", max);
}