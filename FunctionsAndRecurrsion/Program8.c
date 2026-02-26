#include<stdio.h>
double power(int base, int exp);
int main()
{
    int base, exp;
    double result;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    result = power(base, exp);
    printf("%d raised to the power of %d is: %.2f", base, exp, result);
    return 0;
}
double power(int base, int exp)
{
    if(exp == 0)
    {
        return 1;
    }
    else if (exp > 0)
    {
        return base * power(base, exp - 1);
    }
    else
    {
        return 1.0 / power(base, -exp);
    }

}