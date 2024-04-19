// 1. **Question 1: Positive or Negative**
//    Write a C program to input a number and determine whether it's positive, negative, or zero.


#include<stdio.h>
main()
{
    int a;

    printf("ENTER THE NUMBER:");
    scanf("%d",&a);

    if(a==0)
    {
        printf("\nTHE NUMBER IS ZERO");
    }
    else if(a>0)
    {
        printf("\nTHE NUMBER IS POSITIVE");
    }
    else 
    {
        printf("\nTHE NUMBER IS NEGATIVE");
    }
}