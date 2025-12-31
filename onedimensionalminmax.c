//Finding Minimum & Maximum in a One-Dimrnsional Array
#include<stdio.h>
int main(void)
{
	int arr[6], i, min, max;
	//Reading values into arr[6]
	printf("enter any 6-elements for arr[6]:\n");
	for(i=0;i<6;i++)
	    scanf("%d",&arr[i]);
	//Finding minimum & maximum
    min=max=arr[0];
    for(i=0;i<6;i++)
    {
    	if(min>arr[i]) min=arr[i];
    	if(max<arr[i]) max=arr[i];
	}
	printf("\nMinimum in arr[6]: %d", min);
	printf("\nMaximum in arr[6]: %d", max);
}