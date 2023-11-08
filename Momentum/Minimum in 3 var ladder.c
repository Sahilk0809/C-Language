#include<stdio.h>

main()
{
    
    int a,b,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    
    if(a<b && a<c)
    {
        printf("A is minimum");
    }
    else if(b<a && b<c)
    {
        printf("B is minimum");
    }
    else if(c<a && c<b)
    {
        printf("C is minimum");
    }
}