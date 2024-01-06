#include<stdio.h>
#include<conio.h>

void main() 
{
	
    int a = 5;
    int b = 10;
    int result;

    result = a<b && b<a;
    printf("Logical AND : %d\n", result);

    result = a<b || b>a;
    printf("Logical OR : %d\n", result);

    result = !a>b;
    printf("Logical NOT : %d\n", result);

}
