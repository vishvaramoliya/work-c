// Q-3:Use file file handling method and perform read , write and append.


#include<stdio.h>
main(){
    FILE *p;

    char data[100];

    p=fopen("demo1.txt","a");

    if(p==NULL){
        printf("Can't open file...");
    }
    else{
        printf("Open file...\n");
    }
    printf("Enter data...");
    gets(data);
    fputs(data,p);
}