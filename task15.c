#include <stdio.h>
int main()
 {
    int a=0;
    int b=0;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("before swap: a=%d,b=%d\n", a, b);
    a=a^b;
    b=a^b; 
    a=a^b;
    printf("ater swap: a=%d,b=%d\n", a, b);
}
