// Q.5 Write a Program to print the below pattern using nested for loop.
// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
//         5


#include<stdio.h>
main()
{
    for(int i=1; i<=5 ; i++)
    {
        for(int k=1; k<=i; k++)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
}
