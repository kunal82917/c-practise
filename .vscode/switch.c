#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,choice;
    printf("enter the first digit:",a);
    scanf("%d",&a);
    printf("enter the second digit:",&b);
    scanf("%d",&b);
    printf("Enter your choice\n 1.adddition\n 2.subtraction\n 3.multiplication\n 4.division\n 5.exit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Addition of two digits are:%d",a+b);
        break;

        case 2:
        printf("subtraction of two digits are:%d",a-b);
        break;

        case 3:
        printf("multiplication of two digits are:%d",a*b);
        break;

        case 4:
        printf("division of two digits are:%d",a/b);
        break;

        case 5:
        break;
    }
    getch();
}