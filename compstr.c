//String length function
//strrev(char[]);
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[] ="Hydarabad";
	char str2[] = "Hyderabad";
	int cmp;
	cmp=strcmp(str1, str2);
	printf("\nString Comparision : %d", cmp);
}