#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;//n for string size and i for loop counter
	printf("Enter the size of String : ");
	scanf("%d",&n);
	char s[n];
	
	printf("Enter the your name : ");
	scanf("%s",&s);
	
	//process of converting Togglecase
	for(i=0; i<n; i++)
	{
		if(s[0]>='a' && s[0]<='z')
		{
			s[0]=s[0]-32;
		}
	}
	printf("Converted into Toggalcase : %s",s);
	
}
