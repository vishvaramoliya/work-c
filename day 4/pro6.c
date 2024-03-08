#include<stdio.h>
void main()
{
    int a,b,c;

    printf("\n Enter the number of a ");
        scanf("%d",&a);
        printf("\n Enter the number of b ");
        scanf("%d",&b);

    printf("\n the first value is=%d",a);
    printf("\n the secound value is=%d",b);


    c=a;
    a=b;
    b=c;

    printf("\n the first value is=%d",a);
    printf("\n the secound value is=%d",b);
}