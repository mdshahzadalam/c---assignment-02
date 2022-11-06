//3. Write a program to swap values of two int variables

#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=20;
	printf("before swap the value of a = %d and b = %d \n",a,b);
	int temp;
	temp=a;
	a=b;
	printf("before swap the value of a = %d and b = %d ",a,b);
	return 0;
}