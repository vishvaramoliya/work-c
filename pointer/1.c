// Q.1 Write a Program to find MAXIMUM between 2 numbers in TSRN.


#include<stdio.h>

int max(int *a,int *b)
{
    if(*a < *b)
    {
        printf("b is max");
    }
    else
    printf("a is max");
}

int main()
{
    int a,b;

    printf("enter value:");
    scanf("%d",&a);

    printf("enter value:");
    scanf("%d",&b);

    max(&a,&b);

}