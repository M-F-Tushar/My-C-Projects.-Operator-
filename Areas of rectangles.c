#include<stdio.h>
int main()
{
    float lenght,width,area;
    printf("Enter lenght and width :");
    scanf("%f %f",&lenght,&width);

    area = lenght*width;
    printf("Area of rectangle = %.2f",area);
}
