// **Question 1:**
// Write a C program to define a TSRN function named `addNumbers()` that takes two integers as input and calculates their sum. Print the result inside the function. Call this function from the `main()` function and display the sum of two numbers.


#include<stdio.h>
addnumber(int a,int b)
{
    
    int c;
    c=a+b;
    printf("sum=%d",c);
}


main()
{
    int x,y;

    printf("enter a:");
    scanf("%d",&x);
    printf("enter b:");
    scanf("%d",&y);

    addnumber(x,y);

}