#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,sum;
    float perc;
    printf("Enter the marks in 5 subjects ");
    scanf("%d %d %d %d %d ",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    perc=sum/5;
    printf("The percentage  is : %d",perc);
    return 0;
}