#include <stdio.h>
int main()
 {
    int num, i= 0;
    printf("enter a number: ");
    scanf("%d", &num);
    
    while (num!= 0) 
	{
        if (num&1)
	       {
              i++;
           }
              num=num>>1;
    }
    
    printf("Number of 1s in given number is %d", i);
    
}
