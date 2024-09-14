#include<stdio.h>
int main()
{
    int arr[100],i,limit,sum=0;
    printf("Enter Array Limit :");
    scanf("%d",&limit);
    printf("\nEnter Array Elements :");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        sum=sum+arr[i];
    }
    printf("Total sum of array is %d",sum);
}