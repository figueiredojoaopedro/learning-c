/*Leia um vetor Valores com 𝑛 componentes do tipo double e

defina uma função para determinar o desvio padrão amostral 𝑠 dos 𝑛 elementos do vetor  Valores.

Teste a função fazendo uma chamada dentro da função "main".

Imprima os resultados do desvio padrão e a variância amostral 𝑠2  com 2 casas após o ponto decimal.*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    double arr[n];
    double avg = 0;
    double s = 0;
    double s_squared = 0;
    double sum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / n;
    s = sqrt(((sum - avg))/(n-1));
    s_squared = s*s;

    printf("Desvio Padrao Amostral = %.2lf\nVariancia Amostral = %.2lf", s, s_squared);
    return 0;
}