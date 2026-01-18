#include<stdio.h>
int main(){
    int a=20,b=30,temp;
    temp=a;
    a=b;
    b=temp;
    printf("A=%d B=%d",a,b);
    return 0;
}