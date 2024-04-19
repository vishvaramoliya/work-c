// 3. **Question 3: Largest among Three Numbers**
//    Develop a C program that takes three numbers as input and finds the largest among them.


#include<stdio.h>
main()
{
    int a,b,c;

    printf("ENTER THE A:");
    scanf("%d",&a);
    printf("ENTER THE B:");
    scanf("%d",&b);
    printf("ENTER THE C:");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("\nA IS LARGEST");
        }
        else
        {
            printf("\nC IS LARGEST");
        }
    }
    else if(b>c)
    {
        printf("\nB IS LARGEST");
    }
    else
    {
        printf("\nC IS LARGEST");
    }
}