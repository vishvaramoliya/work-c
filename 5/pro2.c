// Calculate Body Mass Index (BMI) with Custom Units:
// Design a program that reads the weight (in kilograms) and height (in meters) of a person from the user and calculates their BMI. 

#include<stdio.h>
main()
{
    int weight;
    float height,BMI;

    printf("\n Enter weight in kilograms:");
    scanf("%d",&weight);

    printf("\n Enter height in meters:");
    scanf("%f",&height);


     BMI = weight / (height * height);
    printf("\n Body Mass Index (BMI):%f",BMI);

}