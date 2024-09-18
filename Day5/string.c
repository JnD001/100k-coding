#include<stdio.h>
int main()
{
    char name[10];
    printf("Enter Your Name :");
    // scanf("%s",name);
    gets(name);
    printf("\nEntered name is %s",name);
}