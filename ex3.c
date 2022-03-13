#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float prodEsc(float,float,float,float,float,float);

int main() {
  float x1,x2,y1,y2,z1,z2;
  
  printf("Digite as coordenadas do 1o vetor:\n");
  scanf("%f%f%f",&x1,&y1,&z1);
  printf("Digite as coordenadas do 2o vetor:\n");
  scanf("%f%f%f",&x2,&y2,&z2);

  printf("Produto Escalar: %f", prodEsc(x1,y1,z1,x2,y2,z2));
  return 0;
}


float prodEsc(float x1, float y1, float z1, float x2, float y2, float z2){
  float response = 0;

  response = (x1*x2)+(y1*y2)+(z1*z2);

  return response;
}