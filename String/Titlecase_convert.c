#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name[50];//string declare
	printf("Enter your name : ");
	gets(name);//user prompt
	int i,length=strlen(name);// length of string and i for loop counter
	
	if(name[0]>=97 && name[0]<=122)//making the first character capital
	{
		name[0] = name[0] - 32;
	}
	for(i=1; i<=length; i++)
	{
		if(name[i-1]==' ')
		{
			if(name[i-1]>=97 && name[i-1]<=122)//making the character capital after space
			{
				name[i-1] = name[i-1] - 32;
			}
		}
		else if(name[i]>=65 && name[i]<=90)//making the characters small if they are capital
		{
			name[i] = name[i] + 32;
		}
		else if(name[i]==' ')//process of making the character capital after space
		{
			if(name[i+1]>=97 && name[i+1]<=122)
			{
				name[i+1] = name[i+1] - 32;
			}
		}
	}
	printf("Title Case converted : ");
	puts(name);//Title Case converted
}