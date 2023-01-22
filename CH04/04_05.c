// 明示常量演示
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)
{
    printf("Some number limits for this system :\n");
    printf("INT_Biggest = %d \n",INT_MAX);
    printf("long long _Smallest = %lld  \n",LLONG_MIN);
    printf("one byte = %d bits on this system. \n",CHAR_BIT);
    printf("Largest double = %e \n",DBL_MAX);
    printf("smallest normal float = %e \n",FLT_MIN);
    printf("float precision = %d digits \n",FLT_DIG);
    printf("float epsilon = %e \n",FLT_EPSILON);

    return 0 ;
}