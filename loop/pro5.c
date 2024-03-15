// Q.5 Write a Program to print leap years between two given numbers using a while loop.

#include<stdio.h>
main()
{
    int fy,sy;

    printf("\n enter first year:");
    scanf("%d",&fy);
    printf("\n enter secound year:");
    scanf("%d",&sy);
    while(fy<=sy)
    {
        if(fy%4==0)
        printf("\n %d",fy);
        fy++;
    }
}