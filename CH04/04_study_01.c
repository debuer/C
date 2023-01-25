//学以致用
#include <stdio.h>

int main(void)
{
    char name[40];
    float cash;

    printf("Please Enter the richer Family name :\n");
    scanf("%s",name);
    printf("how many dollars they richer ?\n");
    scanf("%f",&cash);

    printf("Ok! The %s family may be $%.2f dollars richer .\n",name,cash);

    return 0 ;

}