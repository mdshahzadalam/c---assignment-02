//10. Write a program to make the last digit of a number stored in a variable as zero. 
//    (Example - if x=2345 then make it x=2340)

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number - ");
	scanf("%d",&a);
	b=a-a%10;
	printf("last digit of a numbre as zero that is %d ",b);
	return 0;
}