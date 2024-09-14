#include<stdio.h>
int main()
{
    int arr[100],i,limit,searchKey,flag=0;
    printf("Enter the Array Limit :");
    scanf("%d",&limit);
    printf("\nEnter Array Elements :");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter Your Value to find :");
    scanf("%d",&searchKey);
    for(i=0;i<limit;i++)
    {
        if(searchKey==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\nValue found at position %d",i+1);
    }
    else{
        printf("Value not Found!!");
    }
}