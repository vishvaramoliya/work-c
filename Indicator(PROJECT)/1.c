// Using UDF find  cube of a number using pointer.


#include<stdio.h>
void cube(int *a)
{
    
    int cube;

    cube=*a;


printf("%d",cube*cube*cube);


}
int main()
{
    int *a,ans;

    printf("\nenter the number:");
    scanf("%d",&a);

    cube(&a);

}