//Finding sum & Average of One Dimensional Array
#include<stdio.h>
int main(void)
{
	int arr[6], i, sum=0;
	float avg;
	//Reading values
	printf("Enter values for arr[6]:\n");
	for(i=0;i<6;i++)
	    scanf("%d",&arr[i]);
	//finding sum
	for(i=0;i<6;i++)
	    sum=sum+arr[i];
	//finding average
	avg=(float)sum/6;
	printf("\nSum of elements in arr[6] is: %d",sum);
	printf("\nAverage of elements in arr[6] is: %f",avg);
	}