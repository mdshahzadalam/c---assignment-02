//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
//    convert it into USD

#include<stdio.h>
int main()
{
	float a;
	printf("Enter amount in INR - ");
	scanf("%f",&a);
	float b= a/76.23;
	printf("Amount in USD is %f",b);
	return 0;
}