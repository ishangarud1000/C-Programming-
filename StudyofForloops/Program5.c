#include<stdio.h>
int main()
{
    int num,digit,rem;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        digit=digit+(rem*rem*rem);
        num=num/10;
    }
    if(digit==num){
        printf("The number is Armstrong");
    }
    else{
         printf("The number is not Armstrong");
    }
}