// Q.6 Write a Program to print the below pattern using nested for loop.
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *



#include<stdio.h>
main()
{
    for(int i=1; i<=5 ; i++)
    {
        for(int k=4; k>=i; k--)
        {
            printf(" ");
        }
        for (int j = i*2-1; j >=1; j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
}