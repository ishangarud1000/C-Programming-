#include<stdio.h>
int main()
{
    int num,flag;
    printf("Enter a number ");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        if(num%i==0){
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        printf("The number is a prime number");
    }
    else {
        printf("The number is not a prime number");
    }
    return 0;
}