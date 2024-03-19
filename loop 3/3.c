// Q.3 Write a Program to print the multiplication table of the number N using any type of loop.

#include<stdio.h>
main()
{
    int num;

    printf("\n enter the number:");
    scanf("%d",&num); 

    for (int i = 1; i <=10; i++)
    {
        printf("\n %d * %.2d = %.2d",num,i,num*i);
    }
    
}