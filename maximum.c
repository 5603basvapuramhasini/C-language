#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("Enter a, b, c, values:");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c)
	    printf("%d is maximum",a);
	else if (b>c)
	    printf("%d is maximum",b);
	else
	    printf("%d is maximum",c);
}
