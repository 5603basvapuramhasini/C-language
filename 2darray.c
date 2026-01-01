//Finding Minimum & Maximum in a Two-Dimensional Array
#include<stdio.h>
int main(void)
{
	int arr[4][2], i, j, min, max; 
	printf("Enter values for arr[4][2]:");
	for(i=0;i<4;i++)
    	for(j=0;j<2;j++)
	        scanf("%d",&arr[i][j]);
	//Finding minimum & maximum
    min=max=arr[0][0];
    for(i=0;i<4;i++)
        for(j=0;j<2;j++)
        {
        	if(min>arr[i][j]) min=arr[i][j];
        	if(max<arr[i][j]) max=arr[i][j];
		}
	printf("\nMinimum in arr[4][2]: %d", min);
	printf("\nMaximum in arr[4][2]: %d", max);
}