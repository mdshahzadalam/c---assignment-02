//2. Write a program to print a given number without its last digit.

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	printf("Enter a numbner:-");
	scanf("%d",&a);
	b=a/10;
	printf("without last digit:-%d",b);
	return 0;
}