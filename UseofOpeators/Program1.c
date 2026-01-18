#include<stdio.h>

int main()
{
    int p,t,r,si;
    printf("Enter the units for princpal amount time and rate of interest");
    scanf("%d %d %d",&p,&t,&r);
    si=p*t*r/100;
    printf("The simple interest is : %d",si);
    return 0;
}