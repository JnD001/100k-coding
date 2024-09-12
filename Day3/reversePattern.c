#include<stdio.h>
int main()
{
    int i,j,limit;
    printf("Enter the limit :");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        for(j=limit;j>=i;j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
    
}