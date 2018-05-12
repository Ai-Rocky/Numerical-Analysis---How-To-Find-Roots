#include <stdio.h>
#include <math.h>

main()
{
    float x0, x1 = -2, x2 = -1;
    float f0,f1,f2;
    int a, b, c, step = 0;

    printf("Enter a, b & c: ");
    scanf("%d%d%d",&a,&b,&c);

    printf("\n\tStep\tX1\tX2\tf(x1)\tf(x2)\tX3\tf(x3)\n\n");

    f1 = (a*pow(x1,2)) - (b*x1) - c;
    f2 = (a*pow(x2,2)) - (b*x2) - c;

    while(1)
    {
        if((f1*f2) > 0)
            break;

        x0 = (x1+x2)/2;
        f0 = (a*pow(x0,2)) - (b*x0) - c;

        printf("\t%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n\n",++step,x1,x2,f1,f2,x0,f0);

        if((f1*f0) < 0)
            x2 = x0;
        else
        {
            x1 = x0;
            f1 = f0;
        }

        if( fabs(x2-x1) < .01)
        {
           printf("\nRoot is: %.3f\n\n",x0);
           break;
        }
    }
}
