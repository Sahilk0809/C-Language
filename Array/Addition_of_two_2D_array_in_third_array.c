#include<stdio.h>

main()
{
    int i,j,rows,column;
    printf("Enter the rows of array : ");
    scanf("%d",&rows);
    printf("Enter the column of array : ");
    scanf("%d",&column);
    int a[rows][column],b[rows][column],c[rows][column];
    
    for(i=0; i<rows; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("a[%d][%d] - ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<rows; j++)
        {
            printf("b[%d][%d] - ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nSum stored in third array : \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<column; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}