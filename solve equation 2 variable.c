#include <stdio.h>

main()
{
    int a1,b1,c1;
    int a2,b2,c2;
    int x,y;

    printf("Enter a1,b1,c1:\n");
    scanf("%d%d%d",&a1,&b1,&c1);

    printf("\nEnter a2,b2,c2:\n");
    scanf("%d%d%d",&a2,&b2,&c2);

    x = (b1*c2 - c1*b2) / (b1*a2 - a1*b2);
    y = (c1*a2 - c2*a1) / (b1*a2 - a1*b2);
    //y = (c1 - (x*a1)) / b1;

    printf("\nThe answer is:\n");
    printf("X = %d\n",x);
    printf("Y = %d\n",y);
}
