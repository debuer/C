#include<stdio.h>
#define water_one 3.0e-23 //water_one 一个水分子的质量
int main(void)
{
    double kt_num,fz_num; //  kt_num 水的夸脱数  fz_num 水分子数量
    printf("pelase enter water kt_num :");
    scanf("%lf",&kt_num);
    printf("%lf kt water contain %e fz.\n",kt_num,kt_num*950/water_one);
    return 0 ;
}