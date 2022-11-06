//5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
	int sum ;
        int n,number;
        sum =0;
        printf("Enter a three digits number - ");
        scanf("%d",&n);
             n = number%10;
           sum = sum + number % 10;
             number = number /10 + number /10 + number /10;
            printf("%d",sum);	
	return 0;
}