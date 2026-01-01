#include<stdio.h>
int main(void)
{
	int arr[10000000]={0};
	int i;
	printf("Elements in the Array are;\n");
	for(i=0;i<10000000;i++)
	printf("%d", arr[i]);
}