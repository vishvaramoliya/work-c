// 8. Implement a function to convert a string to uppercase.


#include <stdio.h>
#include <string.h>

int main() {
   char a[100];

   printf("Enter a string: ");
   gets(a);

   strupr(a);

   printf("\n%s",a);
}