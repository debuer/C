#include <stdio.h>
int main (void)
{
    float stature;
    printf("Pelase enter your stature (inch):");
    scanf("%f",&stature);
    printf("Your stature is %f inch or %e cm\n",stature,stature*2.54);
    return 0 ;
}