#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("%d is a Positive Number",num);

    }
    else
    {
        printf("%d is a Negative Number",num);
    }
}