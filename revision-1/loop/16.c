// 16. Write a program to calculate the factorial of a given number using a for loop.

#include<stdio.h>
main()
{
    int no,fact=1;

    printf("\nEnter number:");
    scanf("%d",&no);

    for (int i = no; i >= 1; i--)
    {
        fact*=i;
    }

    printf("\nFACTORIAL NUMBER IS=%d",fact);
    
}