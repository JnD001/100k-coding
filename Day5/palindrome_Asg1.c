#include<stdio.h>
#include<string.h>

int main()
{
    char word[20],reversed[20];
    int i,length;
    printf("Enter a string :");
    scanf("%s",word);

    length=strlen(word);

    for(i=0;i<length;i++)
    {
        reversed[i]=word[length-i-1];

    }
    reversed[length]='\0';

    if (strcmp(reversed, word) == 0)
    {
        printf("Entered string is a palindrome.");
    }
    else
    {
        printf("Entered string is not a palindrome.");
    }

}