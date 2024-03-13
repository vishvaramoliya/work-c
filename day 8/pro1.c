#include<stdio.h>
main()
{
    int a,b,c;

    printf("\n enter the first value : ");
        scanf("%d",&a);

     printf("\n enter the secound value : ");
        scanf("%d",&b);
    
     printf("\n enter the third value : ");
        scanf("%d",&c);

    
    (a>b) ? (a>c) ? printf("A is max") : printf("C is max") : (b>c) ? printf("b is max") : printf("c is max");
    

}