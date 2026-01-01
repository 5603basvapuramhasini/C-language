//Finding sum & Average of One Dimensional Array
#include<stdio.h>
int main(void)
{
	int arr[3][2][3], i, j, k, sum=0;
	float avg;
	//Reading values
	printf("Enter values for arr[3][2][3]:\n");
	for(i=0;i<3;i++)
	    for(j=0;j<2;j++)
	        for(k=0;k<3;k++)
	    scanf("%d",&arr[i][j][k]);
	//finding sum
	for(i=0;i<3;i++)
	    for(j=0;j<2;j++)
	        for(k=0;k<3;k++)
	    sum=sum+arr[i][j][k];
	//finding average
	avg=(float)sum/3*2*3;
	printf("\nSum of elements in arr[3][2][3] is: %d",sum);
	printf("\nAverage of elements in arr[3][2][3] is: %f",avg);
	}