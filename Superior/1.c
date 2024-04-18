// 1. Write a C program to find the sum of elements in an array.

#include<stdio.h>
main()
{
    int i,sum=0,size;

    printf("enter size of array:");
    scanf("%d",&size);

    int a[size];


    for ( i = 0; i < size; i++)
    {
        printf("enter value:");
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < size; i++)
    {
        printf("\n%d",a[i]);
        sum +=a[i];
    }


    printf("the sum is=%d",sum);
   
}