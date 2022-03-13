#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535

float cosseno(float);

int main() {
  float deg = 0;
  printf("Digite o angulo em graus:\n");
  scanf("%f",&deg);
  printf("O cosseno de %f graus eh %f", %deg, %cosseno(deg))
  return 0;
}

float cosseno(float deg){
  
  float response = 0;
  response = cos(deg*PI/180);

  return response;
}