#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=10;i++)
    {
        printf("\nHi");
        if(i==5)
        {
            break;
        }
        printf("\nHello");
    }
    printf("\nFinished");
}