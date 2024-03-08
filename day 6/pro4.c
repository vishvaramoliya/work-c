#include<stdio.h>
main()
{
    int age;

    printf("\n enter number....");
    scanf("%d",&age);

    if(age<18)
    printf("\n you cannot vote....");

    else if(age==18)
    printf("\n you can also vote... ");

    else 
    printf("\n you can vote....");
}