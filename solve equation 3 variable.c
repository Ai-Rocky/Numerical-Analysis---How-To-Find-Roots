#include <stdio.h>

main()
{
    int a1,b1,c1,d1;
    printf("Enter a1, b1, c1, d1:\n");
    scanf("%d%d%d%d",&a1,&b1,&c1,&d1);

    int a2,b2,c2,d2;
    printf("\nEnter a2, b2, c2, d2:\n");
    scanf("%d%d%d%d",&a2,&b2,&c2,&d2);

    int a3,b3,c3,d3;
    printf("\nEnter a3, b3, c3, d3:\n");
    scanf("%d%d%d%d",&a3,&b3,&c3,&d3);

    int a4,b4,c4;
    a4 = (a2*b1) - (a1*b2);
    b4 = (a2*c1) - (a1*c2);
    c4 = (a2*d1) - (a1*d2);

    int a5,b5,c5;
    a5 = (a3*b1) - (a1*b3);
    b5 = (a3*c1) - (a1*c3);
    c5 = (a3*d1) - (a1*d3);

    int w,x,y,z;
    w = (b4*a5) - (a4*b5);
    y = (b4*c5 - c4*b5) / w;
    z = (c4*a5 - c5*a4) / w;
    //z = (c4 - (y*a4)) / b4;

    x = (d1 - (b1*y + c1*z)) / a1;

    printf("\nThe answer is:\n");
    printf("X = %d, Y = %d, Z = %d\n\n",x,y,z);
}

