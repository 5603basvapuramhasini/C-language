#include<stdio.h>
int main(void)
{
	int a;
	int* aptr;//int *aptr;
	aptr = &a; //storing address of a
	printf("Enter value for a:20");
	scanf("%d",aptr);
	printf("Address of a: %p %p", &a, aptr);
	printf("\nValue of a: %d %d", a,*aptr);
}