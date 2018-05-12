#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, root, x1,x2, r, i;

    printf("Enter a, b and c: ");
    scanf("%f %f %f",&a, &b, &c);

    root = (b*b) - 4*a*c;

    // condition for real and different roots
    if (root > 0)
    {
        x1 = (-b + sqrt(root)) / (2*a);
        x2 = (-b - sqrt(root)) / (2*a);

        printf("Root1 = %.2f and Root2 = %.2f", x1, x2);
    }

    //condition for real and equal roots
    else if (root == 0)

        printf("Root1 = Root2 = %.2f", -b / (2*a));


    // if roots are not real
    else
    {
        r = -b / (2*a);
        i = sqrt(-root) /( 2*a);

        printf("Root1 = %.2f + %.2fi\n", r, i);
        printf("Root2 = %.2f - %.2fi", r, i);
    }

    return 0;
}
