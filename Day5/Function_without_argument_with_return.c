#include<stdio.h>
int sum();
int main()
{
    int r;
    r=sum();
    printf("Result = %d",r);
    return 0;
}
int sum()
{
    int num1,num2,result;
    printf("Enter 2 Numbers :");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    return result;
}