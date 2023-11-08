#include<stdio.h>

main()
{
	int age;
	printf("Enter Your Age : ");
	scanf("%d",&age);
	
	if(age>18)
	{
	    if(age>100)
	    {
	        printf("You enter the age more than 100");
	    }
	    else
	    {
	        printf("You are eligible for voting");
	    }
	}
	else
	{
	    if(age<=0)
	    {
	        if(age==0)
	        {
	            printf("You entered neutral age");
	        }
	        else
	        {
	            printf("You entered negative age");
	        }
	    }
	    else
	    {
	        printf("You are not eligible for voting");
	    }
	}
}
