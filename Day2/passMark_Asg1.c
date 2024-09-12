#include<stdio.h>
int main()
{
    float mark;
    printf("Enter Your Mark :");
    scanf("%f",&mark);
    if(mark>=50)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }
}