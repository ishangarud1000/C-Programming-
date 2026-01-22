#include<stdio.h>
int main()
{
    int max,min,i,num;
    for(i=1;i<=5;i++)
    {
        printf("Enter a number");
        scanf("%d",&num);
        if(i==1){
            max=min=num;
        }
        else{
            if (num>max){
              max=num;
            }
            else {
            min=num;
             }
        }
    }
    printf("Maximum number %d",max);
    printf("Minimum number is %d",min);
    return 0;
}
