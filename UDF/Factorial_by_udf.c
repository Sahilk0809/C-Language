#include<stdio.h>
#include<conio.h>

int factorial(int f)
{
	if(f==1)
	{
		return 1;
	}
	return f * factorial(f-1);
}

void main()
{
	int a;
	printf("Enter the value : ");
	scanf("%d",&a);
	printf("Factorial of %d is : %d",a,factorial(a));
}