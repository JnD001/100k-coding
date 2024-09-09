#include<stdio.h>
int main()
{
    int amount;
    float interest,year,SI;
    printf("\nCalculate Simple Interest\n\nEnter Your Principal Amount :");
    scanf("%d",&amount);
    printf("\nEnter Your Interest Rate :");
    scanf("%f",&interest);
    printf("\nEnter the Number of Year:");
    scanf("%f",&year);
    SI=(amount*interest*year)/100;
    printf("\nYour Simple Interest is %f",SI);

}