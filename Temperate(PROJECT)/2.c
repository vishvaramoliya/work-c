#include <stdio.h>
main()
{
  int n;
  int count = 0;
  printf("Enter number: ");
  scanf("%d", &n);
 
  do {
    n /= 10;
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
}