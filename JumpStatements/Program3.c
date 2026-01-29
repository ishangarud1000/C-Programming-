#include<stdio.h>
int main()
{
    int i=1,n,j;
    printf("Enter limits for n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0){
                break;
            }
            else{
                printf("%d ",i);
            }
        }
    }
  return 0;
}