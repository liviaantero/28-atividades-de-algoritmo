#include<stdio.h>
#include<math.h>
//5- faça um algoritmo que receba a entrada de valores a, b, c que calcule a fórmula de bhaskara
int main(){
  int a;
  int b;
  int c;
  int delta;
  float x;
  float x1,x11;
  float x2,x22;
  printf("insira o valor de a:");
  scanf("%d",&a);
  printf("insira o valor de b:");
  scanf("%d",&b);
  printf("insira o valor de c:");
  scanf("%d",&c);
  if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
  }
  else{
    delta = b * b -4 * a * c;
    printf("delta = %d\n",delta);

    x1 = -b - sqrt(delta);
    x11 = x1 / 2 * a;
    printf("x1 = %.2f\n",x11);

    x2 = -b + sqrt(delta);
    x22 = x2 / 2 * a;
    printf("x2 = %.2f",x22);
  }
  return(0);
}
