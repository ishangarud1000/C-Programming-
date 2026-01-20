#include<stdio.h>
int main()
{
    int range,num,sum,j;
    printf("Enter the range ");
    scanf("%d",&range);
    for(j=1;j<=range;j++){
        num=j;
        sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("%d \n",num);
    }
}
    return 0;
}