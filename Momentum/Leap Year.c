#include<stdio.h>

main()
{

	int fromyear,toyear,total,a;
	printf("Enter The Year :");
	scanf("%d",&fromyear);
	printf("Enter The Year :");
	scanf("%d",&toyear);
	
	total=toyear-fromyear;
	a=(total/4)+1;
	printf("Leap Year Between %d to %d are : %d",fromyear,toyear,a);
	
}
