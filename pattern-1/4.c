// Q.4 Write a Program to print the below pattern using nested for loop.
// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5

#include<stdio.h>
main()
{
    for(int i=1; i<=5 ; i++)
    {
        for (int j = i; j <=5; j++)
        {
            printf("%2d",j);
        }
        printf("\n");
        
    }
}