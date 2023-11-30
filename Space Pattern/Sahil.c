#include<stdio.h>

main()
{
    int a,b,c,d,e,f;
    for(a=1; a<=7; a++)
    {
        for(b=1; b<=5; b++)
        {
            if((a==1 && b==1)||(a==1 && b==5)||(a==7 && b==1)||(a==7 && b==5)||(a==4 && b==1)||(a==4 && b==5)||(a==5 && b==1)||(a==3 && b==5))
            {
                printf("  ");
            }
            else if(a==1 || a==4 || a==7 || b==1 || b==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");        
            }
        }printf("  ");
        for(c=1; c<=5; c++)
        {
           if(a==1 || a==3 || c==1 || c==5)
           {
                printf("* ");
           }
            else
            {
                printf("  ");
            }
        }printf("  ");
		for(d=1; d<=5; d++)
        {
            if(a==4 || d==1 || d==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }printf("  ");
        for(e=1; e<=5; e++)
        {
            if(a==1 || a==7 || e==3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }printf("  ");
        
        for(f=1; f<=5; f++)
        {
            if(a==7 || f==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
		 printf("\n");
    }
    

}