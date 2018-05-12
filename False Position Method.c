#include <stdio.h>
#include <math.h>

int a,b,c;

float f(float x)
{
    return (a*pow(x,2) - (b*x) - c);
}

main()
{
    float x1 = 1, x2 = 3, x3;
    float f1,f2,f3;
    int step = 0;

    printf("Enter a, b & c: ");
    scanf("%d%d%d",&a,&b,&c);

    printf("\n\tStep\tX1\tX2\tf(x1)\tf(x2)\tX3\tf(x3)\n\n");

    while(1)
    {
        f1 = f(x1);
        f2 = f(x2);

        x3 = x1 - ((f1 * (x2 - x1)) / (f2 - f1));
        f3 = f(x3);

        printf("\t%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n\n",++step,x1,x2,f1,f2,x3,f3);

        if(step == 7)
        {
            printf("The Root is %.3f\n\n",x3);
            break;
        }

        if((f1 * f3) < 0)
            x2 = x3;
        else
            x1 = x3;
    }
}
