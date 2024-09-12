#include<stdio.h>
int main ()
{
    float mark;
    printf("Enter Your Total Mark Percentage :");
    scanf("%f",&mark);
    if(mark<50)
    {
        printf("Failed");
    }
    else if(mark<60)
    {
        printf("Your Grade is E");
    }
    else if(mark<70)
    {
        printf("Your Grade is D");
    }
    else if(mark<80)
    {
        printf("Your Grade is C");
    }
    else if(mark<90)
    {
        printf("Your Grade is B");
    }
    else if(mark<=100)
    {
        printf("Your Grade is A");
    }
    else{
        printf("Invalid Entry!!!");
    }
}