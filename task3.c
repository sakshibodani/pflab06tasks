#include<stdio.h>
int main()
{
	int balance=50000;
	int withdraw=0;
	printf("ATM WITHDRAWAL MACHINE\n");
	printf("CURRENT BANK BALANCE=50,000\n");
	while(balance>0)
	{
		printf("how much money you would like to withdraw?\n");
		scanf("%d", &withdraw);
		if(withdraw<=balance)
		{
	       balance=balance-withdraw;
	       printf("Successful transaction!\n your new bank balance is %d\n", balance);
     	}
     	else
     	{
     	   printf("you cannot withdraw more than the available balance!!");
     	   break;
     }
}
}
