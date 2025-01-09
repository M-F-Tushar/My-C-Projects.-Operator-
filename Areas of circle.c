#include<stdio.h>//useing library function #include<math.h> will let us use M_PI=3.1416
int main()
{
    float radious,area;

    printf("Enter radious : ");
    scanf("%f",&radious);

    area = 3.1416 * radious *radious;
    printf("Areas of circle = %.2f\n",area);
}
