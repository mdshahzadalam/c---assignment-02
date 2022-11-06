//8. Write a program to check whether the given number is even or odd using a bitwise 
//   operator

#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number- ");
	scanf("%d",&a);
	if(a^1 & (a+1))
	   printf("The number %d is even ",a);
	else
	   printf("The number %d is odd ",a);
	   return 0;
}