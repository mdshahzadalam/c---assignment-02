//13. Write a program to take a three-digit number from the user and rotate its digits by 
//    one position towards the right

#include<stdio.h>
int main()
{
	int n,a,b,c,sum=0;
	printf("Enter a three digit number ");
	scanf("%d",&n);
	a=n/100;
	b=((n%100)/10);
	c=n%10;
	sum=a+b+c;
	printf("Number is %d",sum);
	return 0;
	
}