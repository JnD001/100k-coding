#include<stdio.h>
int main()
{
    int i,limit,sum=0;
    printf("Enter a number (limit) :");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        sum=sum+i;
    }
    printf("Total = %d",sum);
}