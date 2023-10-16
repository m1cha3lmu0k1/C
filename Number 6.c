#include <stdio.h>
int main(void)
{
    float C,F;
    printf("Enter temperature in degrees Celsius: ");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("(%.0f*9/5)+32=%.1f\n",C,F);
    return 0;
}
