#include <stdio.h>
#include <math.h>
int main()
 {
    int num_people;
    float price_per_person = 250.50;
    float total_cost;
    int min_cost;
    
    printf("cinema Group Ticket Calculator \n");
    printf("price per person: Rs. 250.50\n\n");
    printf("enter number of people in the group:");
    scanf("%d", &num_people);
    if (num_people <= 0)
	{
        printf("Error: Number of people must be positive!\n");
        return 1;
    }
    else
    total_cost=num_people*price_per_person;
    printf("the total cost is: ",total_cost);
    min_cost = (int)ceil(total_cost);
    printf("exact cost: Rs. %.2f\n",total_cost);
    printf("minimum total cost (rounded up): Rs. %d\n", min_cost);
}
    
