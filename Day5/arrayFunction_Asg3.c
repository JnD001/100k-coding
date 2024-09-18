#include<stdio.h>
void getArray(int arr[3][3]);
void displayArray(int arr[3][3]);

int main()
{
    int arr[3][3];
    getArray(arr);
    displayArray(arr);
    return 0;
}

void getArray(int arr[3][3])
{
    int i,j;
    printf("Enter values to the Array :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void displayArray(int arr[3][3])
{
    int i,j;
    printf("\nArray values :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}