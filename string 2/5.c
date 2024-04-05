//**Question 5:**
//Write a C program to take two strings as input from the user and concatenate them. Display the concatenated string.


#include<stdio.h>
main()
{
	char n[100],a[100],c[100];
	
	printf("enter string:");
	gets(n);
	printf("enter string:");
	gets(a);
	
	strcpy(c,strcat(a,n));
	
	puts(c);
	
}

