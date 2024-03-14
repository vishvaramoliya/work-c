#include<stdio.h>
main()
{
    int num;

    printf("\n enter any number:");
    scanf("%d",&num);

    (num%2==0) ? printf("\n the number is even") : printf("\n the number is odd");
    
}