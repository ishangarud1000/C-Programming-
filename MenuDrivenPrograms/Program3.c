#include<stdio.h>
int main()
{
    int choice;
    int num,fact,i;
    printf("Enter a numbers:");
    scanf("%d",&num);
    printf("Menu:\n 1.Factorial \n 2.Prime or not \n 3.Odd or even \n 4.Exit \n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of %d is %d",num,fact);
        break;

        case 2: 
        for(i=1;i<=num/2;i++)
        {
            if(num%i==0)
            {
                printf("%d is not a prime number",num);
            }
            else{
                printf("%d is a prime number",num);
            }
            break;
        }

        case 3: 
        if(num%2==0)
        {
            printf("%d is even number",num);
        }
        else{
            printf("%d is odd number",num);
        }
        break;
        
        case 4:
        printf("Exit");
        break;

        default:
        printf("Invalid choice");
    }
    return 0;
}