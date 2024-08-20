// Faça um programa que receba o salário de um 
// funcionário e o percentual de aumento, calcule e 
// mostre o valor do aumento e o novo salário.

#include <stdio.h>

int main() {
  float salario, aumento, salario_ajust;
  printf("Digite o valor do salário ");
  scanf("%f", &salario);

  printf("Digite a porcentagem de aumento ");
  scanf("%f", &aumento);

  salario_ajust = salario + (salario * (aumento/100));

  printf("O salário com aumento é %5.2f", salario_ajust);

  return 0;
}

