#include<stdio.h>
int main()
{
  int l1;
  int l2;
  int l3;
  printf("insira o valor do primeiro lado:");
  scanf("%f",&l1);
  printf("insira o valor do segundo lado:");
  scanf("%f",&l2);
  printf("insira o valor do terceiro lado:");
  scanf("%f",&l3);

  if((((l1 > (l2 - l3)) && (l1 < (l2 + l3)) && ((l2 > (l1 - l3)) && (l2 < l1 + l3))) && (((l3 > (l1 - l2)) && (l2 < l1 + l2)))))
  {
  	printf("esses valores formam um triangulo:\n");
  	if((l1 == l2) && (l2 == l3))
  	{
  		printf("equilatero\n");
	}
    if(((((l1 == l2) && (l1 != l3))) || ((l2 == l3) && (l2 != l1))) || ((l1 == l3) && ( l2 != l3)))
    {
    	printf("isosceles\n");
	}
	if(((l1 != l2) && (l2 != l3)) && ((l1 != l3)))
	{
		printf("escaleno\n");
	}
  }
  else
  {
  	printf("os valores fornecidos nao formam um triangulo, digite novamente\n");
  }
  return (0);
}

