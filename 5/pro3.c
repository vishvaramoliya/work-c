

#include<stdio.h>
main(){

    int first_angle,sec_angle,third_angle;

    printf("\n First angle:");
    scanf("%d",&first_angle);

    printf("\n Secound angle:");
    scanf("%d",&sec_angle);

    third_angle=180-(first_angle+sec_angle);

    printf("\n Third angle=%d",third_angle);
}