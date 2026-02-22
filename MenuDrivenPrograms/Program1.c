#include<stdio.h>
int main()
{
    int choice;
    float area,base,height,l,b,r;
    printf("Menu:\n 1.Area of Circle \n 2. Area of Rectangle \n 3.Area of Triangle \n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: ;
        area=3.14*r*r;
        printf("Area of Circle is %f",area);
        break;

        case 2: 
        printf("Enter length and breadth:");
        scanf("%f %f",&l,&b);
        area=l*b;
        printf("Area of Rectangle is %f",area);
        break;

        case 3: 
        printf("Enter base and height:");
        scanf("%f %f",&base,&height);
        area=0.5*base*height;
        printf("Area of Triangle is %f",area);
        break;

        default:
        printf("Invalid choice");
    }
    return 0;
}