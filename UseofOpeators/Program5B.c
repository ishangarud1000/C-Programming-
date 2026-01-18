#include<stdio.h>
int main(){
    int a=20,b=30;
    a=a-b;
    b=b+a;
    a=b-a;
    printf("A=%d B=%d",a,b);
    return 0;
}