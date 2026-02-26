#include<stdio.h>
int sumavg(int a,int b);
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sumavg(num1,num2);
    return 0;
}
int sumavg(int a,int b)
{
    int sum;
    float avg;
    sum=a+b;
    avg=(a+b)/2.0;
    printf("Sum of %d and %d is: %d\n", a, b, sum);
    printf("Average of %d and %d is: %.2f\n", a, b, avg);
}