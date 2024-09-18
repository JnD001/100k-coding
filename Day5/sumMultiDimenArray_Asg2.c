#include<stdio.h>
int main()
{
    int arr1[10][10],arr2[10][10],limit,i,j;
    printf("Enter the array limit :");
    scanf("%d",&limit);
    printf("\nEnter the values of Array 1 :\n");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter the values of Array 2 :\n");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nSum of 2 arrays :\n");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}