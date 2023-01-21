//转义序列验证
#include <stdio.h>
int main(void)
{
    float salary ;
    printf("\a Enter your desired mothly salary :");
    printf(" $______\b\b\b\b\b\b");
    scanf("%f",& salary);
    printf("\n\t$%.2f a month is $%.2f a year .",salary,salary*12.0);
    printf("\rGee!\n");
    return 0 ;
}