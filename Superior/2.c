// 2. Write a C program to find the largest element in an array.



#include<stdio.h>
main()
{
    int i,max,size;

    printf("enter size of array:");
    scanf("%d",&size);

    int a[size];


    for ( i = 0; i < size; i++)
    {
        printf("enter value:");
        scanf("%d",&a[i]);
    }

    for ( i = 1; i < size; i++)
    {
        if(a[0]<a[i])
        {
            max=a[i];
        }
    }


    printf("the max number is=%d",max);  
}