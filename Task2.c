#include<stdio.h>
int main()
{
	int n=0;
	printf("MULTIPLICATION TABLE\n");
	printf("enter any number from 1 to 10: ");
	scanf("%d", &n);
	for(int i=1; i<=10; i++)
	{
		int j=i*n;
		printf("\n%d x %d = %d",n,i,j);
	}
}
