#include <stdio.h>
#include <math.h>

int a,b,c;

float f(float x)
{
    return (a*pow(x,2) - (b*x) + c);
}
float fp(float x)
{
    return ((2*x) - b);
}

main()
{
    float f1,f2,x0;
    float Xn = 0;
    int step = 1;

    printf("Enter a, b & c: ");
    scanf("%d%d%d",&a,&b,&c);

    printf("\n\tStep\tXn\t\tf(Xn)\t\tf'(Xn)\tX0\n\n");

    while(1)
    {
        f1 = f(Xn);
        f2 = fp(Xn);

        x0 = Xn - (f1 / f2);

        printf("\t%d\t%.3f\t\t%.3f\t\t%.3f\t%.3f\n\n",step++,Xn,f1,f2,x0);


        if(fabs(x0 - Xn) <= .01)
        {
            printf("The Root is %.3f\n\n",x0);
            break;
        }
        else
            Xn = x0;
    }
}

