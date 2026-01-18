#include<stdio.h>
int main()
{
    float cel,far;
    printf("Enter the temperature in celsius");
    scanf("%f",&cel);
    far=(cel*1.8)+32;
    printf("The temperature in Farheneit is : %f",far);
    return 0;
}