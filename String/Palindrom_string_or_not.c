
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char a[50];//string declare
    printf("Enter the string : ");
    gets(a);//user prompt
    int length=strlen(a);//length of string
    int i,j,x=length-1,check;//i and j for loop counters
    
    for(i=0; i<length; i++)
    {
        check=0;
        if(a[i]==a[x])
        {
            check=1;//checking palindrom or not
        }
        x--;
    }
    if(check==1)
    {
        printf("String is Palindrom");
    }
    else
    {
        printf("String is Not Palindrom");
    }
}
