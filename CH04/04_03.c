// 比较 strlen（）函数 与 sizeof（）函数的不同
#include<stdio.h>
#include<string.h>
#define praise "You are an extraordinary being ."
int main(void)
{
    char name[40];

    printf("what's your name ?\n");
    scanf("%s",name);
    printf("hello , %s. %s\n",name,praise);
    printf("your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof(name));
    printf("The phrase of praise has %zd letters,and  occupies %zd memory cells .\n",strlen(praise),sizeof(praise));
    return 0 ;
}