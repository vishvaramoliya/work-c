// 6. **Find the maximum element in an array.**
//    - Write a program to find the largest element present in an array of integers.


#include<stdio.h>

main()
{
    int arr[5];
    int max;
    

    for (int i = 0; i <5; i++)
    {
        printf("Enter Value of array :");
        scanf("%d",&arr[i]);
    }

   for (int i = 1; i < 5; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
    
    printf("Largest element = %d", arr[0]);


}