#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%2==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n%d is Prime Number",num);
    }
    else{
        printf("\n%d is not a Prime Number",num);
    }
}