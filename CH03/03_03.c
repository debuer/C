// Printf 的更多特性
#include <stdio.h>
int main (void)
{
    unsigned int un = 3000000000 ; //int作为32位和short 为16位的系统
    short end = 200 ;
    long big = 65537 ;
    long long verybig = 12345678908642 ;

    printf (" un = %u and not %d\n",un,un);
    printf(" end = %hd and %d\n",end,end);
    printf(" big = %ld and not %hd\n",big,big);
    printf(" verybig = %lld and not %ld\n", verybig,verybig);

    /*额外说明：lld 和 ld 相同的原因*/

    printf(" long long int =%zd\n long int =%zd \n",sizeof (long long int),sizeof(long int));

    return 0 ;

}