// Q.7 Write a Program to print the below pattern using nested for loop.
// A
// B A
// C B A
// D C B A
// E D C B A


#include<stdio.h>
main()
{
    for(int i=65; i<=69 ; i++)
    {
        for (int j = i; j >=65; j--)
        {
            printf("%2c",j);
        }
        printf("\n");
        
    }
}