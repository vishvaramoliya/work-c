// Q.1 Write a Program to create a Book Record System with an Array of objects for a given N number of books using 
// structure. Consider the following attributes in the Book structure:
// - book_id
// - book_title
// - book_author
// - book_genre
// - book_publisher
// - book_publication_year
// - book_price



#include<stdio.h>

struct book
{
    int id;
    char title[100];
    char author[100];
    char genre[100];
    char publisher[100];
    int year;
    int price;
}s[100];

main()
{
    int book;

    printf("enter book number:");
    scanf("%d",&book);

    for(int i=0;i<book;i++)
    {
        printf("enter id:");
        scanf("%d",&s[i].id);

        printf("enter book name:");
        scanf("%s",&s[i].title);

        printf("enter author:");
        scanf("%s",&s[i].author);

        printf("enter genre:");
        scanf("%s",&s[i].genre);

        printf("enter publisher:");
        scanf("%s",&s[i].publisher);

        printf("enter publication year:");
        scanf("%d",&s[i].year);

        printf("enter price:");
        scanf("%d",&s[i].price);
    }



    for(int i=0;i<book;i++)
    {
        printf("\nid:%d",s[i].id);

        printf("\nbook name:%s",s[i].title);

        printf("\nauthor:%s",s[i].author);

        printf("\ngenre:%s",s[i].genre);

        printf("\npublisher:%s",s[i].publisher);

        printf("\npublication year:%d",s[i].year);

        printf("\nprice:%d",s[i].price);
    }
}
