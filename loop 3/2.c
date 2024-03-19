// Q.2 Write a Program to print the factorial of number N using for loop.

#include<stdio.h>
main()
{
    int num,fact=1;
    printf("\n enter the number:");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        fact *=i;
    }
    printf("\n the fact number is=%d",fact);
    
}