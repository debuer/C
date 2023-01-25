//演示 把Printf（）函数的返回值赋值给一个变量
#include <stdio.h>
int main (void)

{
    int wbp = 202 ;
    int rv;

    rv = printf ("%d F is water's boiling point\n",wbp);
    printf("The Printf() function print %d characters.\n",rv);
    
    return 0 ;
}