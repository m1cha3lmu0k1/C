#include <stdio.h>
int main(void)
{
    float b,h,A;
    printf("Enter the base: ");
    scanf("%f",&b);
    printf("Enter the height: ");
    scanf("%f",&h);
    A=0.5*b*h;
    printf("Area of the right-angled triangle = %.2f\n",A);
    return 0;
}
