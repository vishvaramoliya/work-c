// Q.8 Write a Program to print the below pattern using nested for loop.
// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14 15


#include<stdio.h>
main()
{
    int a=1;
    for(int i=5; i>=1 ; i--)
    {
        for (int j = i; j <=5; j++)
        {
            printf("%3d",a);
            a++;
        }
        printf("\n");
        
    }
}