// Q.1 Write a Program to print the sum of all numbers from 1 to N using for loop.

#include<stdio.h>
main()
{
    int num,sum=0;
    printf("\n enter the number:");
    scanf("%d",&num);

    for (int i = 0; i <=num; i++)
    {
        sum +=i;
    }
    printf("\n the sum of %d number is=%d",num,sum);
    
}