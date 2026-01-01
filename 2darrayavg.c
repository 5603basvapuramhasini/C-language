//Finding sum & Average of One Dimensional Array
#include<stdio.h>
int main(void)
{
	int arr[4][2], i, j, sum=0;
	float avg;
	//Reading values
	printf("Enter values for arr[4][2]:\n");
	for(i=0;i<4;i++)
	    for(j=0;j<2;j++)
	    scanf("%d",&arr[i][j]);
	//finding sum
	for(i=0;i<4;i++)
	    for(j=0;j<2;j++)
	    sum=sum+arr[i][j];
	//finding average
	avg=(float)sum/4*2;
	printf("\nSum of elements in arr[4][2] is: %d",sum);
	printf("\nAverage of elements in arr[4][2] is: %f",avg);
	}