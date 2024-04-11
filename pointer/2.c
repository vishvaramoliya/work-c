// Q.2 Write a Program to find MINIMUM between 2 numbers in TSRN.


#include<stdio.h>

int min(int *a,int *b)
{
    if(*a > *b)
    {
        printf("b is minimum");
    }
    else
    printf("a is minimum");
}

int main()
{
    int a,b;

    printf("enter value:");
    scanf("%d",&a);

    printf("enter value:");
    scanf("%d",&b);

    min(&a,&b);

}