#include<stdio.h>
/*4- faça um algoritmo que receba duas datas em anos cuja a primeira entrada tenha um valor inteiro menor que o segundo
 valor, o algoritmo deve mostrar os anos bissextos dentro do intervalo das duas entradas*/
int main()
{
  int ano1;
  int ano2;
  printf("digite o ano do seu nascimento:");
  scanf("%d",&ano1);
  printf("digite o ano atual:");
  scanf("%d",&ano2);
  for(int i = ano1; i <= ano2; i++) {
    if(i % 4 == 0) {
      printf("e ano bissexto:%d\n",i);
    }
    else {
      printf("nao e bissexto:%d\n",i);
    }
  }

  return(0);
}

