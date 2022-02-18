#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // horas é igual a quantidade de segundos dividido por uma hora em segundos(3600)
    // minutos = sec restantes - horas*segundos/ 60, pq uma hora tem 60 minutos
    // segundos = sec menos as horas em segundos - menos os minutos em segundos
    int sec, hour, min, ret_sec;
    scanf("%d", &sec);
    hour = (sec / 3600);
    min = (sec - (hour * 3600)) / 60;
    ret_sec = (sec - (hour * 3600) - (min * 60));
    printf("%d:%d:%d", hour, min, ret_sec);
}