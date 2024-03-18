// Q.4 Write a Program to print the Fibonacci series up to N numbers using a for loop.

#include<stdio.h>
main()
{
    int f=0,s=1,n,num;
    printf("\n enter the number:");
    scanf("%d",&num);

    for (int i = 0; i <=num; i++)
    {
        printf("\n %d",f);

    n=f+s;
    f=s;
    s=n;
    }   
}