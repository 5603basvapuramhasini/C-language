//reading and printing strings using string specific function.
#include<stdio.h>
int main(void)
{
	char str[20];
	puts("Enter Your City Name:");
	gets(str);              //scanf("%s", str);
	puts("Your City Name:");
	puts(str);
}