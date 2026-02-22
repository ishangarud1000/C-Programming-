#include<stdio.h>
int main()
{
    int choice;
    int a,sum=0,digit,mul=1;
    printf("Enter number:");
    scanf("%d",&a);
    printf("Menu:\n 1.Sum of Digits \n 2. Products of digits \n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: ;
        while(a!=0)
        {
            digit=a%10;
            sum+=digit;
            a=a/10;
        }
        printf("Sum of digits is : %d",sum);
        break;

        case 2: 
         while(a!=0)
        {
            digit=a%10;
            mul*=digit;
            a=a/10;
        }
        printf("Product of digits is : %d",mul);
        break;

        default:
        printf("Invalid choice");
    }
    return 0;
}