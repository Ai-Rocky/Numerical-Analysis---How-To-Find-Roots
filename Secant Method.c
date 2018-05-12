#include <stdio.h>
#include <math.h>

int a,b,c;

float f(float x)
{
    return (a*pow(x,2) - (b*x) - c);
}

main()
{
    float x1 = 4, x2 = 2, x3 = 9;
    float f1,f2,f3;
    int step = 0;

    printf("Enter a, b & c: ");
    scanf("%d%d%d",&a,&b,&c);

    printf("\n\tStep\tX1\tX2\tf(x1)\tf(x2)\tX3\tf(x3)\n\n");

    f1 = f(x1);
    f2 = f(x2);

    while(1)
    {
        x3 = ((f2*x1) - (f1*x2)) / (f2-f1);
        f3 = f(x3);

        printf("\t%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n\n",++step,x1,x2,f1,f2,x3,f3);

        if(fabs(x3-x2) > 0.01)
        {
            x1 = x2; x2 = x3;
            f1 = f2; f2 = f3;

        }else
        {
            printf("The Root is %.3f\n\n",x3);
            break;
        }

    }
}

