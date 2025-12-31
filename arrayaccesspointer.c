//reading & printing array elements through pointers
#include<stdio.h>
int main(void)
{
	int arr[5], i;
	int* ptr;
	ptr = arr;
	//reading the array elements through pointer ptr
	printf("Enter 5-elements:\n");
	for(i=0;i<5;i++)
	    scanf("%d", ptr+i);
	//printing the array elements through pointer ptr
	printf("\nArray Elements are:\n");
	for(i=0;i<5;i++)
	    printf("%d", *(ptr+i));
}