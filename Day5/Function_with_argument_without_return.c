#include<stdio.h>
void sum(int,int);
int main()
{
    int num1,num2;
    printf("Enter 2 numbers :");
    scanf("%d%d",&num1,&num2);
    sum(num1,num2);
    return 0;
}

void sum(int a,int b)
{
    int sum;
    sum=a+b;
    printf("Result = %d",sum);
}