
#include <stdio.h>
main()
{
    int num, sum=0, fd, ld;
    
    printf("\nEnter number: ");
    scanf("%d", &num);
       
    ld = num % 10; 
    printf("\n last digit is:%d",ld);
    fd = num;
   
    while(num >= 10)
    {
        num = num / 10;
    }
    fd = num;
    sum = fd + ld; 

    printf("\nSum of first and last digit is = %d", sum);

}