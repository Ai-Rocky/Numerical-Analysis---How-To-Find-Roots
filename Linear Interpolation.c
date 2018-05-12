#include <stdio.h>

float f(float x)
{
    return pow(x-1,3);
}
main()
{
    float x,x1,x2;
    float fx;

    printf("Enter x, x1, x2: ");
    scanf("%f%f%f",&x,&x1,&x2);

    fx = f(x1) + (((x-x1)*(f(x2)-f(x1))) / (x2-x1));
    printf("f(x) = %.2f\n\n",fx);
}
