#include<stdio.h>
int main()
{
    int arr[100],i,limit;
    printf("Enter Array Limit :");
    scanf("%d",&limit);
    printf("\nEnter array elements :");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Array Elements are :");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
}