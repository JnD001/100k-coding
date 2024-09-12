#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%d is larger",num1);
        }
        else{
            printf("%d is larger",num3);
        }
    }else{
        if(num2<num3){
            printf("%d is larger",num3);
        }else{
            printf("%d is larger",num2);
        }
    }
}