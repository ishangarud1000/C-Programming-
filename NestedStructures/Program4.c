#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter the values for a and b");
    scanf("%d %d",&a,&b);
    printf("Enter 1 for Addition");
    printf("Enter 2 for Subtraction");
    printf("Enter 3 for multiplication");
    printf("Enter 4 for division");
    printf("Enter your choice");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Addition of two number is %d",a+b);
    }
    else if(choice==2)
    {
        printf("Subtraction of two number is %d",a-b);
    }
    else if(choice==3)
    {
        printf("Multplication of two number is %d",a*b);
    }
    else if(choice==4)
    {
        printf("Division of two number is %d",a/b);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}