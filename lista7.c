#include<stdio.h>
/*7- faça um código onde receba dois números inteiros e somar estes dois números após isso escrever mais dois números e somar
eles e dividir o priemeiro resultado pelo segundo*/
int main(){
  int a;
  int b;
  int c;
  int d;
  float r;
  int r1, r2;
  printf("digite o primeiro valor:");
  scanf("%d",&a);
  printf("digite o segundo valor:");
  scanf("%d",&b);
  printf("digite o terceiro valor:");
  scanf("%d",&c);
  printf("digite o quarto valor:");
  scanf("%d",&d);

  r1 = a + b;
  r2 = c + d;
  printf("r1= %d\nr2= %d", r1,r2);

  r = r1 / r2;
  printf("\nr= %.2f", r);

  return(0);
}

