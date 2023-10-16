#include <stdio.h>
int main(void)
{
    float D,T,S;
    printf("Enter distance traveled in metres: ");
    scanf("%f",&D);
    printf("Enter time taken in minutes: ");
    scanf("%f",&T);
    S=(D/T)*18/5;
    printf("%.1f km/h\n",S);
    return 0;
}
