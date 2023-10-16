#include <stdio.h>
int main(void)
{
    float M;
    int m;
    printf("Enter measurement in kilometers: ");
    scanf("%f",&M);
    m=M*1000;
    printf("%.1f kilometers = %d metres.\n",M,m);
    return 0;
}
