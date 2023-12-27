#include<stdio.h>
#include<conio.h>

int sum(int s)
{
	if(s==1)
	{
		return 1;
	}
	return s + sum(s-1);
}

void main()
{
	int a;
	printf("Enter the value : ");
	scanf("%d",&a);
	printf("Sum of %d is : %d",a,sum(a));
}