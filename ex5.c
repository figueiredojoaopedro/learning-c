#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535

double graus(float);

int main() {
  float rad = 0;
  printf("Digite o angulo em radianos:\n");
  scanf("%f",&rad);
  printf("O angulo de %.6f radianos equivale a %.6lf graus.", rad, graus(rad));
  return 0;
}

double graus(float rad){
  
  double response = 0;
  response = (rad*180/PI);

  return response;
}