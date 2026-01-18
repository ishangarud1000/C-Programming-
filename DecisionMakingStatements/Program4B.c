#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("Enter a three number");
    scanf("%d %d %d",&a,&b,&c);
    min=a<b && a<c?a:b<c && b<a?b:c;
    printf("The minimum number is %d",min);
    return 0;
}