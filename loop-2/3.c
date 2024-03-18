// Q.3 Write a Program to print even numbers from 1 to N using a do-while loop.

#include<stdio.h>
main()
{
    int i=1,a;
    printf("\n enter the number: ");
    scanf("%d",&a);
    do{
        if(i%2==0)
        {
            printf("\n%d",i);
        }
        i++;
    }while (i<=a);
   
    
}