#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double q, l, p, measure;
    scanf("%lf\n%lf\n%lf", &q, &l, &p);
    measure = ((q * 2) + (l * 3) + (p * 5)) / 10;
    printf("MEDIA = %.1lf", measure);
}