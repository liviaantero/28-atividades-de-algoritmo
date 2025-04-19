#include<stdio.h>
//6- algoritmo que tenha entrada dois números inteiros que some e depois mostre o resultado
int main(){
  int a;
  int b;
  int r;
  printf("insira o primeiro numero:");
  scanf("%d", &a);
  printf("insira o segundo numero:");
  scanf("%d", &b);
  r = a + b;
  printf("resultado = %d",r);
  return (0);
}

