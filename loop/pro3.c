// Q.3 Write a Program to print 1 to N using a while loop.

#include<stdio.h>
main()
{
    int a=1,n;

    printf("\n Enter any value:");
    scanf("%d",&n);

    while(a<=n)
    {
        printf("\n %d",a);
        a++;
    }
}