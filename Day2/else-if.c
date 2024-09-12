#include<stdio.h>
int main()
{
    int num1,num2,choice,result;
    printf("Enter 2 numbers :");
    scanf("%d%d",&num1,&num2);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter Your Choice :");
    scanf("%d",&choice);
    if(choice==1)
    {
        result=num1+num2;
        printf("\n%d + %d = %d",num1,num2,result);
    }
    else if(choice==2)
    {
        result=num1-num2;
        printf("\n%d - %d = %d",num1,num2,result);
    }
    else if(choice==3)
    {
        result=num1*num2;
        printf("\n%d x %d = %d",num1,num2,result);
    }
    else if(choice==4)
    {
        result=num1/num2;
        printf("\n%d / %d = %d",num1,num2,result);
    }
    else
    {
        printf("\nInvalid choice\nPlease Enter a Valid Choice!!!");
    }
}