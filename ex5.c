#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int value, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1;
    scanf("%d", &value);
    notas_100 = value / 100;
    value = value - (notas_100 * 100);
    notas_50 = value / 50;
    value = value - (notas_50 * 50);
    notas_20 = value / 20;
    value = value - (notas_20 * 20);
    notas_10 = value / 10;
    value = value - (notas_10 * 10);
    notas_5 = value / 5;
    value = value - (notas_5 * 5);
    notas_2 = value / 2;
    value = value - (notas_2 * 2);
    notas_1 = value / 1;
    value = value - (notas_1 * 1);
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00", notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1);
}