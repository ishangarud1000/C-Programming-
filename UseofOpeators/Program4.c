#include<stdio.h>
int main()
{
    float sal,da,ta,gross;
    printf("Enter basic salary");
    scanf("%f",&sal);
    da=sal*0.10;
    ta=sal*0.12;
    gross=sal+ta+da;
    printf("Gross salary =%f",gross);
    return 0;
}