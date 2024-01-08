#include<stdio.h>
main()
{
	int i,j,k=1,y=1,x;
	for(i=1; i<=10; i++)
	{
		for(x=1; x<i; x++)
		{
			printf("--");
		}
		for(j=i; j<=10; j++)
		{
			printf("%d ",k);
			k=k+j;
		}
		
		for(j=9; j>=i; j--)
		{
			printf("%d ",k);
			k=k+j;
		}
		y+=i;
		k=i+y;
		printf("\n");
	}
}

