#include<stdio.h>
int main()
{
    int arr[100],limit,i,num=0;
    printf("Enter the size of an Array :");
    scanf("%d",&limit);
    printf("\nEnter the values of Array :");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        if(arr[i]%2==0)
        {
            num=num+1;
        }
    }
    printf("Number of even numbers in the given array is %d",num);
}