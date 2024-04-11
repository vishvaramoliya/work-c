// Q.3 Write a Program to swap two variables using Pointers.



#include<stdio.h>

int swap(int *a,int *b)
{
    int *t;

    t=*a;
    *a=*b;
    *b=t;
    printf("\n\n a=%d  \n b=%d",*a , *b);
}


main()
{
    int a,b;

    printf("enter value:");
    scanf("%d",&a);

    printf("enter value:");
    scanf("%d",&b);

    printf("\n a=%d",a);
    printf("\n b=%d",b);

    swap(&a,&b);
}
