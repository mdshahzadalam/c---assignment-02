//1. Write a program to print unit digit of a given number

#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number:-");
	scanf("%d",&a);
	int b;
	b=a%10;
	printf("Unit digit of number:-%d",b);
	return 0;
}