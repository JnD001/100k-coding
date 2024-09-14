#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],temp[100],i,limit;
    printf("Enter the size of arrays :");
    scanf("%d",&limit);
    printf("\nEnter the values of Array 1 :");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter the values of Array 2 :");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<limit;i++)
    {
        temp[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp[i];
    }
    printf("\nArrays after swapping :\n\nArray 1 :");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nArray 2 : ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr2[i]);
    }
}
