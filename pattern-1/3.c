// Q.3 Write a Program to print the below pattern using nested for loop.
// 5
// 4 4 
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

#include<stdio.h>
main()
{
    for(int i=5; i>=1 ; i--)
    {
        for (int j = i; j <=5; j++)
        {
            printf("%2d",i);
        }
        printf("\n");
        
    }
}