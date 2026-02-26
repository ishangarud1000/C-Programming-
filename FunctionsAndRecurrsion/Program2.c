#include<stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact(num);
    return 0;
}
int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    
    }
    printf("Factorial of a number is : %d", fact);
}