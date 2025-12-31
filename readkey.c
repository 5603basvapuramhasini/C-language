#include<stdio.h>
int main(void)
{
	int arr[5];
	int i;
	printf("Enter any five values:");
	for(i=0;i<5;i++)
	    scanf("%d", &arr[i]);
	printf("Elements in the Array are:\n");
	  for(i=0;i<5;i++)
	printf("%d",arr[i]);
}