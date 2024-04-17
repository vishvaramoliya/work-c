// Q.2 Write a Program to create a Car Inventory System with an Array of objects for a given N number of cars 
// using structure. Consider the following attributes in the Car structure:
// - car_id
// - car_make
// - car_model
// - car_year
// - car_color
// - car_price
// - car_mileage


#include<stdio.h>

struct book
{
    int id;
    char make[100];
    char model[100];
    int year;
    char color[100];
    int price;
    int mileage;

}s[100];

main()
{
    int car;

    printf("enter car number:");
    scanf("%d",&car);

    for(int i=0;i<car;i++)
    {
        printf("enter car id:");
        scanf("%d",&s[i].id);

        printf("enter car name:");
        scanf("%s",&s[i].make);

        printf("enter car model name:");
        scanf("%s",&s[i].model);

        printf("enter year:");
        scanf("%d",&s[i].year);

        printf("enter car color:");
        scanf("%s",&s[i].color);

        printf("enter price of car:");
        scanf("%d",&s[i].price);

        printf("enter car mileage:");
        scanf("%d",&s[i].mileage);
    }



    for(int i=0;i<car;i++)
    {
        printf("\ncar id:%d",s[i].id);

        printf("\ncar make:%s",s[i].make);

        printf("\ncar model:%s",s[i].model);

        printf("\nyear:%d",s[i].year);

        printf("\ncar color:%s",s[i].color);

        printf("\ncar price:%d",s[i].price);

        printf("\ncar mileage:%d",s[i].mileage);
    }
}
