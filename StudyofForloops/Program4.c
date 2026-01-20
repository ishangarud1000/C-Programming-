#include<stdio.h>
int main()
{
    int num,flag,range,j;
    printf("Enter a number ");
    scanf("%d",&range);
    for(j=2;j<=range;j++){
    num=j;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            flag=i;
            break;
        }
    }
    if(flag==num){
        printf("%d \n",num);
    }
}
    return 0;
}