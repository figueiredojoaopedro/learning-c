#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a, b, c, vert;
    b = 0;
    c = 0;
    scanf("%f%f%f", &a, &b, &c);
    if (a != 0)
    {
        vert = -1 * (b) / (2 * a);
    }
    printf("%.4f", vert);
}