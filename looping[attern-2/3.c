// Q.3 Write a Program to print the below pattern using nested for loop.
//         5
//       4 4
//     3 3 3
//   2 2 2 2
// 1 1 1 1 1


#include<stdio.h>
main()
{
    for(int i=5; i>=1 ; i--)
    {
        for(int k=i-1; k>=1; k--)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
}