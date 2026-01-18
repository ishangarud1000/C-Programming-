#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter two numbers for calculation");
    scanf("%d %d",&a,&b);
    printf("Enter 1 for Addition");
    printf("Enter 2 for Subtraction");
    printf("Enter 3 for multiplication");
    printf("Enter 4 for division");
    printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Addition of two number is %d",a+b);
        break;
        case 2:
        printf("Subtraction of two number is %d",a-b);
        break;
        case 3:
        printf("Multiplication of two number is %d",a*b);
        break;
        case 4:
        printf("Division of two number is %d",a/b);
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}