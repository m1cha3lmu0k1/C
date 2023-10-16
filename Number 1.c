#include <stdio.h>
int main(void)
{
    float a,b,c,Sm,Pr,Av;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the third number: ");
    scanf("%f",&c);
    Sm=a+b+c;
    Pr=a*b*c;
    Av=(a+b+c)/3;
    printf("Sum = %.1f\n",Sm);
    printf("Product = %.1f\n",Pr);
    printf("Average = %.2f\n",Av);
    return 0;
}
