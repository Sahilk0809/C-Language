#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k=1,l=0;
    
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=i; j++)
        {
           printf("%d ",k++);
        }
        printf("\n");
    }
    for(i=9; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
}