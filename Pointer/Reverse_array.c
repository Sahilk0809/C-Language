#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;//n is for size of array and i is loop counter
	printf("Enter the size of array : ");
	scanf("%d",&n);//size of array
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] - : ",i);
		scanf("%d",&a[i]);//elements of array user input
	}
	
	int *ptr = &a[n-1];//address of last element of array
	
	printf("\nReversed array : \n");
	for(i=n-1; i>=0; i--)
	{
		printf("%d \n",*ptr);//reverse array	
		ptr--;
	}
}