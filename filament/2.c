// Write a Program to convert the given string in toggle case without using any string function.

#include<stdio.h>

main(){
    char val[]="HelLo worLD";

    for(int i=0; val[i] != NULL; i++){
        if(val[i]>='a' && val[i]<='z'){
            val[i] -=32;
        }
        else if(val[i]>='A' && val[i]<='Z'){
            val[i] +=32;
        }
        printf("%c",val[i]);
    }
}
