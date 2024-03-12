#include<stdio.h>
main()
{
    int a,b,c,d;

    printf("\n enter a=");
    scanf("%d",&a);

    printf("\n enter b=");
    scanf("%d",&b);

    printf("\n enter c=");
    scanf("%d",&c);
    
    printf("\n enter d=");
    scanf("%d",&d);

    if(a>b)
    {
       if(a>c)
       {
        if(a>d)
        printf("\n A is max");

        else
        printf("\n D is max");
       }

       else
       printf("\n C is max");
    }
    else if(b>c)
    {
        if(b>d)
        {
            printf("\n B is max");
        }
        else
        printf("\n D is max");
    }
    else if(c>d)
    {
        printf("\n C is max");

    }
    else
    printf("\n D is max ");
    
    

}