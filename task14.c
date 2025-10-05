#include <stdio.h>
int main()
 {
    int num;
    int i=0;
    printf("Enter a number: ");
    scanf("%d", &num);
     for (i = 1; i <= 3; i++) 
	 {
        printf("multiply by %d: %d\n",  1 << i, num << i, i);
    }
       
}
