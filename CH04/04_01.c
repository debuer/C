// 用户交互演示程序
#include<stdio.h>
#include<string.h> //提供 strlen 函数
#define density 62.4
int main(void)
{
    float weight,volume;
    int size,letters;
    char name[12]; //name是一个可以容纳40个字符的数组

    printf("Hi! What's your name ? \n");
    scanf("%s",name);
    printf("%s, what's your weight in pounds? \n",name);
    scanf("%f",&weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / density ;
    printf("well,%s,your volume is %2.2f cubic feet .\n",name,volume);
    printf("also,your frist name has %d letters , \n",letters);
    printf("and we have %d bytes to store it . \n",size);
    return 0 ;
}