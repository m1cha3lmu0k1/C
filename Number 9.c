#include <stdio.h>
int main(void)
{
    float w,W,P;
    printf("Enter weight of package in grams: ");
    scanf("%f",&w);
    W=w/1000;
    P=1/W;
    printf("The weight of the package is %.1f kilograms.\nIt takes %.1f such packages to form one kilogram.\n",W,P);
    return 0;
}
