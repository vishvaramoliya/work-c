#include<stdio.h>
main(){
    int n;
    printf("\n size of array");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
      printf("Enter the VAlue :");
      scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i<= 4; i++)
    {
        if (arr[0]>arr[i])
        {
            arr[0]==arr[i];
        }
        

    }
        printf("\n");
        printf("Smallest Element :%d\n",arr[0]);

}