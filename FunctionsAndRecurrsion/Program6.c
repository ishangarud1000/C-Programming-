#include<stdio.h>
int sumofnaturalnumbers(int n);
int main()
{
    int num,sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num<0)
    {
        printf("Please enter a positive integer");
    }
    sum=sumofnaturalnumbers(num);
    printf("Sum of first %d natural numbers is: %d", num, sum);
    return 0;
}
int sumofnaturalnumbers(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n+ sumofnaturalnumbers(n-1);
    }
}