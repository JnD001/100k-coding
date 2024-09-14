#include<stdio.h>
int main()
{
    int arr[100],i,j,limit,temp;
    printf("Enter the size of an array :");
    scanf("%d",&limit);
    printf("Enter the values of array :");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSorted Array :");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
}