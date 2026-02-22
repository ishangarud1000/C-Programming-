#include<stdio.h>
int main()
{
    int choice;
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Menu:\n 1.Addition \n 2. Subtraction \n 3.Multiplication \n 4.Division \n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: ;
        printf("Addition of two numbers is : %d",a+b);
        break;

        case 2: 
        printf("Subtraction of two numbers is : %d",a-b);
        break;

        case 3: 
        printf("Multiplication of two numbers is : %d",a*b);
        break;

        case 4:
        printf("Division of two numbers is : %d",a/b);
        break;

        default:
        printf("Invalid choice");
    }
    return 0;
}