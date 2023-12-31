#include<stdio.h>
#include<conio.h>

void cube()
{
    int a;
    printf("Enter the value : ");
    scanf("%d",&a);//user input
    a = a * a * a;//cube of the number
    printf("The cube of the value is : %d",a);
}

void main()
{
    cube();//calling function
}
