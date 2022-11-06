//11. Write a program to input a number from the user and also input a digit. Append a 
//    digit in the number and print the resulting number. (Example - number=234 and 
//    digit=9 then the resulting number is 2349)

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number -");
	scanf("%d",&a);
	printf("Enter a digit -");
	scanf("%d",&b);
	 a = a * 10 + b;
	 printf("After appending the digit is - %d",a);
	 return 0;
}