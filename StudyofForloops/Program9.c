#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("GCd is %d",a);
    }
    while(a!=b)
    {
      if(a>b)
      {
        a=a-b;
      }
      else if(b>a)
      {
        b=b-a;
      }
      printf("GCD is %d",a);
    }
    return 0;
}
    