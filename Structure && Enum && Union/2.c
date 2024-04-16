// Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N
//  number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
// - emp_id
// - emp_name
// - emp_age
// - emp_role
// - emp_city
// - emp_experience
// - emp_company_name


#include<stdio.h>

struct student
{
    int id;
    char name[100];
    int age;
    char role[100];
    char city[100];
    int year;
    char company_name[100];
}s[100];

main()
{
    int stud;

    printf("enter student number:");
    scanf("%d",&stud);

    for(int i=0;i<stud;i++)
    {
        printf("enter id:");
        scanf("%d",&s[i].id);

        printf("enter name:");
        scanf("%s",&s[i].name);

        printf("enter age:");
        scanf("%d",&s[i].age);

        printf("enter role:");
        scanf("%s",&s[i].role);

        printf("enter city:");
        scanf("%s",&s[i].city);

        printf("enter experience:");
        scanf("%d",&s[i].year);

        printf("enter company name:");
        scanf("%s",&s[i].company_name);
    }



    for(int i=0;i<stud;i++)
    {
        printf("\nid:%d",s[i].id);

        printf("\nname:%s",s[i].name);

        printf("\nage:%d",s[i].age);

        printf("\nrole:%s",s[i].role);

        printf("\ncity:%s",s[i].city);

        printf("\nexperience:%d",s[i].year);

        printf("\ncompany name:%s",s[i].company_name);
    }
}
