#include<stdio.h>

main()
{
	int i,j;
	
	for(i=41; i<=45; i++)
	{
		for(j=41; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}