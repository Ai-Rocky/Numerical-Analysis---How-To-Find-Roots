#include <stdio.h>

main()
{
    float x1=0, x2=0, x3=0;
    float y1, y2, y3;

    while(1)
    {
        y1 = (5 - x2 - x3) / 2;
        y2 = (15 - 3*x1 - 2*x3) / 5;
        y3 = (8 - 2*x1 - x2) / 4;

        float z1 = fabs(y1-x1);
        float z2 = fabs(y2-x2);
        float z3 = fabs(y3-x3);

        if(z1 < 0.01 && z2 < 0.01 && z3 < 0.01)
        {
            printf("The Answer is:\n");
            printf("x1 = %.2f, x2 = %.2f, x3 = %.2f\n",x1,x2,x3);
            break;
        }

        x1 = y1;
        x2 = y2;
        x3 = y3;

        printf("x1 = %.2f, x2 = %.2f, x3 = %.2f\n",x1,x2,x3);

    }
}
