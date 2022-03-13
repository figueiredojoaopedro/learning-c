#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist3(float,float,float,float,float,float);

int main() {
  float x1,x2,y1,y2,z1,z2;
  
  printf("Digite as coordenadas do 1o. ponto:\n");
  scanf("%f%f%f",&x1,&y1,&z1);
  printf("Digite as coordenadas do 2o. ponto:\n");
  scanf("%f%f%f",&x2,&y2,&z2);
  
  printf("Distancia entre os dois pontos: %f", dist3(x1,y1,x2,y2,z1,z2));
  
  return 0;
}

float dist3(float x1,float y1,float x2,float y2, float z1, float z2){
  double resp = 0;
  resp = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1) + ((z2-z1)*(z2-z1))));
  
  return resp;
}

