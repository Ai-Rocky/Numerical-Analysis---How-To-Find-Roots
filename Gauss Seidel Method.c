#include <stdio.h>

main()
{
    float x1=0, x2=0, x3=0;
    float y1, y2, y3;

    while(1)
    {
        y1 = x1;
        y2 = x2;
        y3 = x3;

        x1 = (5 - x2 - x3) / 2;
        x2 = (15 - 3*x1 - 2*x3) / 5;
        x3 = (8 - 2*x1 - x2) / 4;

        if(fabs(x1-y1)<0.01 && fabs(x2-y2)<0.01 && fabs(x3-y3)<0.01)
        {
            printf("The Answer is:\n");
            printf("x1 = %.2f, x2 = %.2f, x3 = %.2f\n",x1,x2,x3);
            break;
        }

        printf("x1 = %.2f, x2 = %.2f, x3 = %.2f\n",x1,x2,x3);

    }
}
