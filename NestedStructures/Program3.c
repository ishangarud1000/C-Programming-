#include<stdio.h>
int main()
{
    int unit;
    int bill;
    printf("Enter your consumed electricity units");
    scanf("%d",&unit);
    if(unit<=100)
    {
        bill=unit*5;
    }
    else if(unit>100 &&unit<=200)
    {
        bill=unit*7;
    }
    else{
        bill=unit*10;
    }
    printf("Bill is %d",bill);
    return 0;
}