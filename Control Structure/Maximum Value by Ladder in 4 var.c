#include <stdio.h>

main()
{
    //Find Maximum Value by using Ladder
    int a,b,c,d;
    printf("Enter The Values : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if(a>b && a>c && a>d)
    {
        printf("A is Maximum");
    }
    else if(b>a && b>c && b>d)
    {
        printf("B is Maximum");
    }
    else if(c>a && c>b && c>d)
    {
        printf("C is Maximum");
    }
    else if(d>a && d>b && d>c)
    {
        printf("D is Maximum");
    }
    
}
