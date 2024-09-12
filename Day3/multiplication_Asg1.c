#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a Number :");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("\n%d x %d = %d",i,num,i*num);
    }
}