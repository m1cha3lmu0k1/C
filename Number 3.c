#include <stdio.h>
int main(void)
{
    float l,w,A,P;
    printf("Enter the length: ");
    scanf("%f",&l);
    printf("Enter the width: ");
    scanf("%f",&w);
    A=l*w;
    P=2*(l+w);
    printf("Area = %.2f\n",A);
    printf("Perimeter = %.2f\n",P);
    return 0;
}
