// Design a program that reads the original price and discount percentage from the user and calculates the discount amount.

#include<stdio.h>
main()
{
    int price,dis,DP;

    printf("\n enter your price:");
        scanf("%d",&price);
    
    printf("\n enter discount:");
        scanf("%d",&dis);
    
    DP=(price*dis)/100;

    printf("the discount price  is:%d",DP);
}