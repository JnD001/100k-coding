#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\nHi");
        if(i==5)
        {
            continue;
        }
        printf("\nHello");
    }
    printf("\nFinished");
}