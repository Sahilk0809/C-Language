#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char a[50];
	printf("Enter the String : ");
	gets(a);
	int len = strlen(a);
	int *ptr = &len;
	
	printf("\nLength of string is : %d",*ptr);
}