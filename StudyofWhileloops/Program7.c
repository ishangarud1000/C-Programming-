#include<stdio.h>
int main() {
    int num,i,square;
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &num);
        square=num*num;
        printf("Square of %d is %d\n", num, square);
    } while (num!=1);
    return 0;
}