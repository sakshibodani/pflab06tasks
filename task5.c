#include<stdio.h>
int main()
{
	int num=7;
	int fact=1;
	int i;
	for(i=1; i<=num; i++)
	{
		fact=fact*i;	
	}
	printf("the total arrangements are: %d\n", fact);
    }
