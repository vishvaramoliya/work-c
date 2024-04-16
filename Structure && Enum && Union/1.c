// Q.1 Write a Program to create Student Record System for 3 students using structure.
//  Consider the below-mentioned attributes in the Student structure:
// - stu_id
// - stu_name
// - stu_age
// - stu_course
// - stu_city
// - stu_standard
// - stu_school



#include<stdio.h>

struct student
{
    int id;
    char name[100];
    int age;
    char course[100];
    char city[100];
    int std;
    char school[100];
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

        printf("enter course:");
        scanf("%s",&s[i].course);

        printf("enter standerd:");
        scanf("%d",&s[i].std);

        printf("enter school:");
        scanf("%s",&s[i].school);

    }



    for(int i=0;i<stud;i++)
    {
        printf("\nid:%d",s[i].id);

        printf("\nname:%s",s[i].name);

        printf("\nage:%d",s[i].age);

        printf("\ncourse:%s",s[i].course);

        printf("\nstanderd:%d",s[i].std);

        printf("\nschool:%s",s[i].school);

    }
}