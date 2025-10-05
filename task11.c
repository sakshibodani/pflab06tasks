#include<stdio.h>
#include<math.h>

int main()
{
	float H=0.0;
	float angle=0.0;
	float L=0.0;
    printf("Enter the height : ");
    scanf("%f", &H);
    printf("Enter the angle in radians: ");
    scanf("%f", &angle);
    if(angle==0)
    { 
    printf("enter angle gretaer than 0");
	}
	else if(angle==0 && H==0)
	{
		printf("infinite solution!");
	}
	else if(angle<0)
	{
		printf("enter a positive angle");
	}
	else
	{
    L=H/tan(angle);
    printf("the length of the shadow is: %.2f", L);
}
}

