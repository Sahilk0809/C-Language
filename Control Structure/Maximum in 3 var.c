#include<stdio.h>



main()
{
	int a,b,c;
	printf("Enter The Value :");
	scanf("%d%d%d",&a,&b,&c);
	
	(a>b)?(a>c)?printf("a is Maximum"):printf("c is Maximum") :(b>c)?printf("b is Maximum"):printf("c is Maximum");
}