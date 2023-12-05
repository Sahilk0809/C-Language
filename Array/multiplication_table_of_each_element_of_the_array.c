#include<stdio.h>

main()
{
    int i,n,j;
    printf("Enter the size of : ");
    scanf("%d",&n);
    int a[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enter the values in array : ");
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=1; j<=10; j++)
        {
            printf("%d x %d = %d\n",a[i],j,a[i]*j);
        }
        printf("\n");
    }
    
}