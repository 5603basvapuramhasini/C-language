//Finding the roots of a Quadratic Equation 
#include<stdio.h>
#include<math.h>
int main(void)
{
	float a, b, c, disc, r1, r2;
	printf("Enter a, b, & c values:");
	scanf("%f %f %f",&a, &b ,&c);
	disc = b*b-4*a*c;
	if(disc>0)
	{
		printf("\nRoots are Real & Distinct");
		r1=(-b+sqrt(disc))/(2*a);
		r2=(-b-sqrt(disc))/(2*a);
		printf("\nRoot-1: %f \nRoot-2:%f", r1, r2);
	}
	else if(disc==0)
	{
		printf("\nRoots are Real & Equal");
		r1 = r2 = -b/(2*a);
		printf("\nRoot-1: %f \nRoot-2:%f", r1, r2);
	}
	else
	{
		printf("\nRoots are Imaginary");
	}
}