// Q.2 Write a Program to find the largest element from a given 2D array.

#include<stdio.h>
main()
{
    int i,r,c,j;

    printf("\n enter the row:");
    scanf("%d",&r);
    printf("\n enter the column:");
    scanf("%d",&c);

    int a[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter the number:");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(a[0][0]<a[i][j])
           {
            a[0][0]=a[i][j];
           } 
        }
    }

    printf("\n bigest value is:%d",a[0][0]);
    

}