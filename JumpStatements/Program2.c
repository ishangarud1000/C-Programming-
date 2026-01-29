#include<stdio.h>
int main()
{
    int n=10,i,sum=0,num;
    for(i=1;i<=n;i++)
    {
        printf("Enter a number");
        scanf("%d",&num);
        if(num<0)
        {
            continue;
        }
        else{
            sum=sum+num;
        }
    }
    printf("Sum is %d",sum);
    return 0;
}