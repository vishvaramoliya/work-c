#include<stdio.h>
main()
{
    int a,b,c;

    printf("\n enter a=");
    scanf("%d",&a);

    printf("\n enter b=");
    scanf("%d",&b);

    printf("\n enter c=");
    scanf("%d",&c);
    

    if(a>b){
        if(a>c)
        printf("\n A is max");

        else
        printf("\n B is max");
    }

    else if(b>c)
    printf("\n B is max");

    else
    printf("\n C is max");

}