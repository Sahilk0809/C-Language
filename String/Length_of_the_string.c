#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int n,i,length;//n for string size and i for loop counter and length to store the size of string in which the user input the name
	printf("Enter the size of String : ");
	scanf("%d",&n);
	char s[n];
	
	printf("Enter the your name : ");
	scanf("%s",&s);
	
	//process to find the length of string
	for(i=0; i<s[i]; i++)
	{
		length++;
	}
	printf("Length of the String : %d",length);
	
}
