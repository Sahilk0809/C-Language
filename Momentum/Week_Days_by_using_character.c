#include<stdio.h>

main()
{
	char a;
	printf("Enter The Character (M,T,W,t,F,s,S) :");
	scanf(" %c",&a);
	
	switch(a)
	{
		case 'M': printf("Monday");
		break;
		case 'T': printf("Tuesday");
		break;
		case 'W': printf("Wednesday");
		break;
		case 't': printf("Thursday");
		break;
		case 'F': printf("Friday");
		break;
		case 's': printf("Saturday");
		break;
		case 'S': printf("Sunday");
		break;
		default: printf("Enter Valid Character (M,T,W,t,F,s,S)");
	}
}