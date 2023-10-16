#include <stdio.h>
int main(void)
{
    float r,C,A;
    printf("Enter the radius: ");
    scanf("%f",&r);
    C=2*3.14*r;
    A=3.14*r*r;
    printf("Circumference = %.2f\n",C);
    printf("Area = %.2f\n",A);
    return 0;
}
