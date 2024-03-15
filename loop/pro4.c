// Q.4 Write a Program to print N to 1 using a while loop.

#include<stdio.h>
main()
{
    int n;

    printf("\n enter the number:");
    scanf("%d",&n);
    while(n>=1)
    {
        if(n%2)
        printf("\n %d",n);
        n--;
    }
}