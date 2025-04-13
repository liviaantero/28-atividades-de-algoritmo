#include<stdio.h>
#include<string.h>
//2- crie um algoritmo que identifique se a altura do usuário é maior ou menor da altura media nacional
int main(){
  float altura;
  char a[] = "sim";
  char b[] = "nao";
  char c[5];
  char genero[100];
  char* g = genero;
  char gfeminino[] = "feminino";
  char gmasculino[] = "masculino";
  float mmasculino1 = 1.75;
  float mmasculino2 = 1.70;
  float mfeminino1 = 1.62;
  float mfeminino2 = 1.60;
  printf("insira seu genero:");
  scanf("%s", g);
  printf("insira a sua altura:");
  scanf("%f",&altura);
  printf("seu genero: %s\n", genero);
  printf("sua altura: %.2f\n", altura);
  printf("\nas informaçoes estao corretas?\n~sim\n~nao\n");
  scanf(" %s", c);

  if(strcmp (c,a) == 0){
    if(strcmp (genero,gfeminino) == 0){
      if(altura < mfeminino2){
        printf("sua altura e considerada abaixo da media nacional feminina.");
      }
      if(altura == mfeminino2){
        printf("sua altura e considerada dentro da media nacional feminina");
      }
      if(altura > mfeminino2){
        printf("sua altura e considerada maior que a media nacional feminina");
      }
    }
  }
  if(strcmp (c,a) == 0){
    if(strcmp (genero,gmasculino) == 0){
      if(altura < mmasculino2){
        printf("sua altura e considerada abaixo da media nacional masculina.");
      }
      if(altura == mmasculino2){
        printf("sua altura e considerada dentro da media nacional masculina.");
      }
      if(altura > mmasculino2){
        printf("sua altura e considerada maior que a media nacional masculina.");
      }
    }
  }
  if(strcmp (c,b) == 0){
    while(strcmp (c,b) == 0){
      printf("digite novamente as informações");
      printf("\ninsira seu genero:");
      scanf("%s", g);
      printf("insira a sua altura:");
      scanf("%f",&altura);
      printf("seu genero: %s\n", genero);
      printf("sua altura: %.2f\n", altura);
      printf("as informaçoes estao corretas?\n~sim\n~nao\n");
      scanf(" %s", c);
    }
  }
  if(strcmp (c,a) == 0){
    if(strcmp (genero,gfeminino) == 0){
      if(altura < mfeminino2){
        printf("sua altura e considerada abaixo da media nacional feminina.");
      }
      if(altura == mfeminino2){
        printf("sua altura e considerada dentro da media nacional feminina");
      }
      if(altura > mfeminino2){
        printf("sua altura e considerada maior que a media nacional feminina");
      }
    }
  }
  if(strcmp (c,a) == 0){
    if(strcmp (genero,gmasculino) == 0){
      if(altura < mmasculino2){
        printf("sua altura e considerada abaixo da media nacional masculina.");
      }
      if(altura == mmasculino2){
        printf("sua altura e considerada dentro da media nacional masculina.");
      }
      if(altura > mmasculino2){
        printf("sua altura e considerada maior que a media nacional masculina.");
      }
    }
  }
  return (0);
}
