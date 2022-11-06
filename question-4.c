//4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	printf("before swap the value of a = %d and b = %d \n",a,b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("before swap the value of a = %d and b = %d ",a,b);
	return 0;
}