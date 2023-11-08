#include<stdio.h>  
  
main()  
{  
    int a;  
  
    printf("Enter an integer number\n");  
    scanf("%d", &a);  
  
    (a % 2 == 0)?printf("%d is Even number\n",a):printf("%d is Odd  number\n",a);  
    
}  