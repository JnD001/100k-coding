#include<stdio.h>
int main()
{
    int i,j,limit,arr[100],temp;
    printf("Enter the Array Limit :");
    scanf("%d",&limit);
    printf("\nEnter Array Elements :");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {

            if(arr[i]> arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nAfter Sorting :\nArray Elememts are :");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
}