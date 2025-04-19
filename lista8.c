#include<stdio.h>
#include<string.h>
//8- escreva um algoritmo que peça o nome idade gênero e altura do usuário
int main(){
  char nome[10];
  char genero[10];
  int idade;
  float altura;
  printf("insira seu primeiro nome:");
  scanf("%s",nome);
  printf("insira seu genero:");
  scanf("%s",genero);
  printf("insira sua idade:");
  scanf("%d",&idade);
  printf("insira a sua altura:");
  scanf("%f",&altura);
  printf("\nseu nome:%s",nome);
  printf("\nseu genero:%s",genero);
  printf("\nsua idade:%d",idade);
  printf("\nsua altura:%.2f",altura);
  return(0);
}
