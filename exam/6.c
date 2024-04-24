#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    
    FILE* demo;
 
   
    demo = fopen("data.txt", "w+");
 
    char name[100];

    printf("\n enter name:");
    gets(name);
    
    fprintf(demo, "%s",name);
 
  
    fclose(demo);
 
}