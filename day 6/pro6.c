#include<stdio.h>
main()
{
    int a;

    printf("\n enter year....");
    scanf("%d",&a);

    if(a%4==0)
    printf("\n %d is leap year...",a);

   

    else 
    printf("\n %d is not leap year...",a);
}