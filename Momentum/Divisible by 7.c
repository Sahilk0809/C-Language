#include<stdio.h>

main()
{
    
    int a;
    printf("Enter the value : ");
    scanf("%d",&a);
    
    (a%7==0)? printf("The value is divisible by 7") : printf("The value is not divisible by 7");
    
}