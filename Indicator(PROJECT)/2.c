// Using UDF swap between 3 numbers using pointer.


#include<stdio.h>
void swap(int *a , int *b, int *c)
{
    
    int t;

    t=*a;
    *a=*b;
    *b=*c;
    *c=t;


    printf("\n after swaping:");

    printf("\n a=%d \n b=%d \n c=%d",*a,*b,*c);


}
void main()
{
    int a,b,c;

    printf("\nenter the number:");
    scanf("%d",&a);
    printf("\nenter the number:");
    scanf("%d",&b);
    printf("\nenter the number:");
    scanf("%d",&c);


    printf("\n a=%d \n b=%d \n c=%d",a,b,c);

    swap(&a,&b,&c);

}