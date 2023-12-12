#include<stdio.h>
#include<conio.h>
#include<String.h>

void main()
{
	int n,i;//n for string size and i for loop counter
	printf("Enter the size of String : ");
	scanf("%d",&n);
	char s[n];
	
	printf("Enter the your name : ");
	scanf("%s",&s);
	
		//process of converting Uppercase
	for(i=0; i<n; i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
	}
	printf("Converted into uupercase : %s",s);
	
}