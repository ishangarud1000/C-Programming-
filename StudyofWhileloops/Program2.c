#include<stdio.h>
int main()
{
    int i=1,n,sum;
    printf("Enter limits for n  ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum is %d\n",sum);
}