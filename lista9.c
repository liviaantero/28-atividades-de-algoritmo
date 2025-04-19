#include<stdio.h>
#include<string.h>
//- desenvolva um algoritmo que receba um número inteiro e informe se ele é par ou ímpar
int main(){
  int a;
  char s[10];
  char s1[] = "sim";
  char s2[] = "nao";
  do{
    printf("insira o numero:");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("numero par.");
     }
    else{
      printf("numero impar.\n");
    }
  
    printf("\ndeseja sair?");
    scanf("%s", s);
  }
  while(strcmp(s,s1) != 0);
  return (0);
}
