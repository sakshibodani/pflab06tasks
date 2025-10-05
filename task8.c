#include<stdio.h>
#include<math.h>
int main()
{
	float M=0.0, I=0.0, S=0.0;
	printf("enter the intensity: ");
	scanf("%f", &I);
	printf("enter the standard refernce value: ");
	scanf("%f", &S);
	if(S>0)
	{
	    M=log10(I/S);
	    printf("magnitude of earthquake is : %.2f\n", M);
	}
	else
	{
		printf("standard value must be greater than 1");
	}
}
