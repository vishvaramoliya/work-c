// 2. **Question 2: Odd or Even**
//    Create a C program to check whether a given integer is odd or even.



#include<stdio.h>
main()
{
    int a;

    printf("ENTER THE NUMBER:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("\nTHE NUMBER IS EVEN");
    }
    else 
    {
        printf("\nTHE NUMBER IS ODD");
    }
}