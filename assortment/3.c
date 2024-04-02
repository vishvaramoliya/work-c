// Q.3 Write a Program to find the transpose matrix of a given 2D array.

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
    printf("\n transpos metrix is....\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }

    

    
 
}