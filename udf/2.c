// **Question 2:**
// Define a TSRN function called `multiplyNumbers()` that takes two integers as parameters and calculates their multiplication. Print the result inside the function. Call this function from the `main()` function and display the multiplication of the two numbers.


#include<stdio.h>
multiplynumber(int a,int b)
{
    
    int c;
    c=a*b;
    printf("ans=%d",c);
}


main()
{
    int x,y;

    printf("enter a:");
    scanf("%d",&x);
    printf("enter b:");
    scanf("%d",&y);

    multiplynumber(x,y);

}