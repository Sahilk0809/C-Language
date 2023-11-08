#include<stdio.h>

main()
{
    
    int a,b,c;
    printf("Enter the value of a, b & c : ");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b && a>c)
    {
        printf("A is maximum");
    }
    else if(b>a && b>c)
    {
        printf("B is maximum");
    }
    else if(c>a && c>b)
    {
        printf("C is maximum");
    }
}