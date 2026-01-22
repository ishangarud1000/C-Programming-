#include<stdio.h>
int main()
{
    int n,num,sum=1,term=1;
    printf("Enter number for limits");
    scanf("%d",&n);
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=2;i<=n;i++)
    {
        term=term*num;
        sum=sum+term;
    }
    printf("%d",sum);
    return 0;
}