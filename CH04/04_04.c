// 在披萨饼程序中 使用已定义的常量
#include <stdio.h>
#define PI 3.1415926

int main(void)
{
    float area,circum,radius;

    printf("what's the radius of your pizza?\n");
    scanf("%f",&radius);
    area = PI * radius *radius ;
    circum = 2.0 * PI * radius ;
    printf("Your basic pizza paramenters are as follows:\n");
    printf("circumference = %.2f , area = %.2f \n",circum,area);

    return 0 ;
}