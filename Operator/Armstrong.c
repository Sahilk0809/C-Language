#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter The Value:");
    scanf("%d",&num);
    
    int x,y,z,a,b,c;
    
    x=num%10;
    a=num/10;
    y=a%10;
    b=a/10;
    z=b%10;
    
    c=(x*x*x)+(y*y*y)+(z*z*z);
     printf("%d",c==num);
}
