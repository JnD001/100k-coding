#include<stdio.h>
int sum(int,int);
int main()
{
    int num1,num2,c;
    printf("Enter 2 Numbers :");
    scanf("%d%d",&num1,&num2);
    c=sum(num1,num2);
    printf("\nResult is %d",c);
    return 0;
}

int sum(int a,int b)
{
    int result;
    result=a+b;
    return result;
}