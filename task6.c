#include<stdio.h>
int main()
{ 
    int num=0;
    int reversed=0;
    int i;
	printf("enter a series of numbers: ");
	scanf("%d", &num);
	while(num!=0)
	{
		i=num%10; /*to get the last digit*/
		reversed=reversed*10+i; /*adding that last digit to variable*/
		num=num/10; /*decreasing the last place of orignal number*/ 
		
	}
	printf("the reversed numbers are %d", reversed);
}
