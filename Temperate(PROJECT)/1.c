#include <stdio.h>
 main() 
{
    char i = 'a';  
    int step = 4;  

   
    do {
       
        printf("\n%c ", i);

        i += step;

    } while (i <= 'z');  

}