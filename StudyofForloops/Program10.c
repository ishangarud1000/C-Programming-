#include<stdio.h>
int main()
{
    int a,b,lcm,gcd;
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
    }
    gcd=a;
    lcm=(a*b)/gcd;
    printf("LCM is %d",lcm);
    return 0;
}
    