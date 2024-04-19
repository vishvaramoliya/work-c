// 4. **Question 4: Leap Year Check**
//    Write a C program to check if a given year is a leap year or not.


#include<stdio.h>
main()
{
    int year;

    printf("\nENTER THE YEAR:");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("\n%d IS LEAP YEAR",year);
    }
    else
    {
        printf("\n%d IS NOT LEAP YEAR",year);
    }
    
}