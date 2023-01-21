// 打印数据类型的占用空间大小
#include<stdio.h>
int main (void)
{
    printf("Type int has a size of %zd bytes.\n",sizeof(int));
    printf("Type short has a size of %zd bytes.\n",sizeof(short));
    printf("Type char has a size of %zd bytes.\n",sizeof(char));
    printf("Type long has a size of %zd bytes.\n",sizeof(long));
    printf("Type long double has a size of %zd bytes.\n",sizeof(long double));
    printf("Type float has a size of %zd bytes.\n",sizeof(float));
    printf("Type double has a size of %zd bytes.\n",sizeof(double));
}