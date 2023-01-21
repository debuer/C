#include<stdio.h>
int main (void)
{
    float year = 3.156e7 ;
    int age ;
    printf("Please Enter your age :");
    scanf("%d",&age);
    printf("you have live in earth %e s\n",year*age);
    return 0 ;
}