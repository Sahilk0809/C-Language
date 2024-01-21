#include<stdio.h> 
#include<conio.h>

void main()
{
    
   int n, i;
 
    printf("Enter a Number ");
    scanf("%d",&n);
 
    for(i=10; i>=1; i--)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    
}