#include<stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}

void sum()
{
    int num1,num2,sum;
    printf("Enter Two Numbers :");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("\nResult is %d",sum);
}