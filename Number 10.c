#include <stdio.h>
#include <math.h>
int main (void)
{
    int number;
    double square,squareRoot,cube,cubeRoot;

    printf("Enter a number: ");
    scanf("%d",&number);

    square=number*number;
    squareRoot=sqrt(number);
    cube=number*number*number;
    cubeRoot=cbrt(number);

    printf("Square = %.0f\n",square);
    printf("Square root = %.2f\n",squareRoot);
    printf("Cube = %.0f\n",cube);
    printf("Cube root = %.2f\n",cubeRoot);
    return 0;
}
