// 字段宽度演示
#include <stdio.h>
#define PAGES 95989898

int main (void)

{
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);

    return 0 ;
}