#include<stdio.h>
int main()
{
	int amount=0;
	int quarters=0, dimes=0, nickels=0, pennies=0;
	printf("enter the amount in centes:");
	scanf("%d", &amount);
	if(amount<0)
	  printf("ammount cannot be negative!\n");
	  while (amount>=25)
	  {
	  	quarters++;
	  	amount=amount-25;
	  }
	  while (amount>=10)
	  {
	  	dimes++;
	  	amount=amount-10;
	  }
	  while (amount>=5)
	  {
	  	nickels++;
	  	amount=amount-5;
	  }
	  while (amount>=1)
	  {
	  	pennies++;
	  	amount=amount-1;
	  }
	  printf("coins needed: \n");
	  printf("quarters :%d\n", quarters);
	  printf("dimes : %d\n", dimes);
	  printf("nickels : %d\n", nickels);
	  printf("pennies: %d\n", pennies);
}
