// Q.2 Write a Program to print the below pattern using nested for loop.
// 11
// 12 13
// 14 15 16
// 17 18 19 20
// 21 22 23 24 25


#include<stdio.h>
main()
{
    int a=11;
    for(int i=1; i<=5 ; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%3d",a);
            a++;
        }
        printf("\n");
        
    }
}