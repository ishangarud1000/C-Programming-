#include<stdio.h>
int main()
{
    int s=0,t=1,j,i,n;
    printf("Enter limits for n  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",s);
        j=s+t;
        s=t;
        t=j;
    }
    
    return 0;
}