#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    year%400==0 || year%4==0  && year%100!=0 ? printf("The year is a leap year"): printf("The year is not leap year");
    return 0;
}