//使用不同类型的字符串
#include<stdio.h>
#define praise "You are an extraordinary being."
int main(void)
{
    char name[40];
    printf("What's your name ?\n");
    scanf("%s",name);
    printf("Hello , %s .\n%s\n",name,praise);
    return 0 ;
}