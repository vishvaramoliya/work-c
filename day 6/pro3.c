#include<stdio.h>
main()
{
    int a;

    printf("\n enter number....");
    scanf("%d",&a);

    if(a<0)
    printf("\n value is nagative....");

    else if(a==0)
    printf("\n number is zero... ");

    else 
    printf("\n number is positive....");
}