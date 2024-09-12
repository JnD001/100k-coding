#include<stdio.h>
int main()
{
    int choice;
        printf("HOTEl Menu :\n1.Porotta\n2.Biriyani\n3.Fried Rice\n4.Mandhi\nEnter Your Choice :");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nYou have ordered Porotta");
            break;
        case 2:
            printf("\nYou have ordered Biriyani");
            break;
        case 3:
            printf("\nYou have ordered Fried Rice");
            break;
        case 4:
            printf("\nYou have ordered Mandhi");
            break;
        default:
            printf("Please Enter a Valid Choice!!!");
       }
}