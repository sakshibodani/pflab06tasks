#include<stdio.h>
#include<math.h>
int main()
{
	float A, P=0.0;
	float r=0;
	int n,t=0;
	printf("Enter the principal amount : ");
    scanf("%f", &P);
    printf("Enter the annual interest rate in percentage: ");
    scanf("%f", &r);
    printf("Enter the number of times interest is compounded per year : ");
    scanf("%d", &n);
    printf("Enter the time period in years: ");
    scanf("%d", &t);
    if(P<= 0)
    {
        printf("Error! Principal amount must be greater than 0!\n");
    }
    if(r< 0)
    {
        printf("Error! Interest rate cannot be negative!\n");
    }
     if(n<= 0)
    {
        printf("Error! Compounding frequency must be greater than 0!\n");
    }
    if(t <= 0)
    {
        printf("Error! Time period must be greater than 0!\n");
    }
    r=r/100.0;
    A=P*pow((1+r/n),n*t);
    printf("Future Value: %.2f\n", A);
}
