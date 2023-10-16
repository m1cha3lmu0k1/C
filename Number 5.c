#include <stdio.h>
int main (void)
{
    float m,M;
    printf("Enter measurement in cm: ");
    scanf("%f",&m);
    M=m/100;
    printf("%.2f cm = %.2f metres\n",m,M);
    return 0;
}
